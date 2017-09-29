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

#include "to_app_stubs.h"

TO_App_Returns_t TO_App_Return = {0};

int32 TO_Channel_OpenChannel(uint32 index, char *ChannelName,
        char *ConfigTableName, char *ConfigTableFileName,
        char *DumpTableName)
{
    return TO_App_Return.TO_Channel_OpenChannel_Return;
}


void  TO_Channel_LockByIndex(uint32 index)
{
    
}


void  TO_Channel_UnlockByIndex(uint32 index)
{
    
}


uint8 TO_Channel_State(uint32 index)
{
    uint8 returnCode = 0;

    if(0 == TO_App_Return.TO_Channel_State_CallCount) 
    {
        returnCode = TO_App_Return.TO_Channel_State_Return;
    }
    else
    {
        TO_AppCustomData.Channel[0].Mode = TO_CHANNEL_DISABLED;
        returnCode = TO_App_Return.TO_Channel_State_Return1;
    }
    TO_App_Return.TO_Channel_State_CallCount++;
    return returnCode;
}
