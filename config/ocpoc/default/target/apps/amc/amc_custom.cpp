/****************************************************************************
*
*   Copyright (c) 2017 Windhover Labs, L.L.C. All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
*
* 1. Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
* 2. Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in
*    the documentation and/or other materials provided with the
*    distribution.
* 3. Neither the name Windhover Labs, L.L.C. nor the names of its 
*    contributors may be used to endorse or promote products derived 
*    from this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
* FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
* COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
* BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
* OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
* AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
* LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
* ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
*
*****************************************************************************/

#include "cfe.h"
#include "amc_app.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <unistd.h>
#include <errno.h>

#define AMC_RCOUT_ZYNQ_PWM_BASE (0x43c00000)
#define AMC_FREQUENCY_PWM       (400)
#define AMC_TICK_PER_S          (50000000)
#define AMC_TICK_PER_US         (50)
#define AMC_DEVICE_PATH         "/dev/mem"


typedef struct {
    uint32 Period;
    uint32 Hi;
} AMC_PeriodHi_t;

typedef struct
{
     AMC_PeriodHi_t PeriodHi[AMC_MAX_MOTOR_OUTPUTS];
} AMC_SharedMemCmd_t;

volatile AMC_SharedMemCmd_t *SharedMemCmd;


uint32 AMC_Freq2tick(uint16 FreqHz);


int32 AMC::InitDevice(void)
{
    uint32 i;
    int mem_fd;

    /* Initialize just in case we were reloaded and the ctor wasn't called. */
    SharedMemCmd = 0;

    //signal(SIGBUS,catch_sigbus);
    mem_fd = open(AMC_DEVICE_PATH, O_RDWR | O_SYNC);
    SharedMemCmd = (AMC_SharedMemCmd_t *) mmap(0, 0x1000, PROT_READ | PROT_WRITE,
                        MAP_SHARED, mem_fd, AMC_RCOUT_ZYNQ_PWM_BASE);
    close(mem_fd);

    if (SharedMemCmd == 0) {
        return errno;
    }

    for (i = 0; i < AMC_MAX_MOTOR_OUTPUTS; ++i) {
        SharedMemCmd->PeriodHi[i].Period = AMC_Freq2tick(AMC_FREQUENCY_PWM);
        SharedMemCmd->PeriodHi[i].Hi     = AMC_Freq2tick(AMC_FREQUENCY_PWM) / 2; // i prefer it is zero at the beginning
        //PX4_ERR("initialize pwm pointer failed.%d, %d", sharedMem_cmd->periodhi[i].period, sharedMem_cmd->periodhi[i].hi);
    }

    OS_TaskDelay(100);
    StopMotors();

    return 0;
}

void AMC::SetMotorOutputs(const uint16 *PWM)
{
    uint32 i = 0;

    /* Convert this to duty_cycle in ns */
    for (i = 0; i < AMC_MAX_MOTOR_OUTPUTS; ++i) {
        SharedMemCmd->PeriodHi[i].Hi = AMC_TICK_PER_US * PWM[i];
    }
}



uint32 AMC_Freq2tick(uint16 FreqHz)
{
    uint32 duty = AMC_TICK_PER_S / (unsigned long)FreqHz;
    return duty;
}
