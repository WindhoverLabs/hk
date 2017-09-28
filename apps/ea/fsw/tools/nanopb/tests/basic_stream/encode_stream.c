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
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
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
 ****************************************************************************/

/* Same as test_encode1.c, except writes directly to stdout.
 */

#include <stdio.h>
#include <pb_encode.h>
#include "person.pb.h"
#include "test_helpers.h"

/* This binds the pb_ostream_t into the stdout stream */
bool streamcallback(pb_ostream_t *stream, const uint8_t *buf, size_t count)
{
    FILE *file = (FILE*) stream->state;
    return fwrite(buf, 1, count, file) == count;
}

int main()
{
    /* Initialize the structure with constants */
    Person person = {"Test Person 99", 99, true, "test@person.com",
        3, {{"555-12345678", true, Person_PhoneType_MOBILE},
            {"99-2342", false, 0},
            {"1234-5678", true, Person_PhoneType_WORK},
        }};
    
    /* Prepare the stream, output goes directly to stdout */
    pb_ostream_t stream = {&streamcallback, NULL, SIZE_MAX, 0};
    stream.state = stdout;
    SET_BINARY_MODE(stdout);
    
    /* Now encode it and check if we succeeded. */
    if (pb_encode(&stream, Person_fields, &person))
    {
        return 0; /* Success */
    }
    else
    {
        fprintf(stderr, "Encoding failed: %s\n", PB_GET_ERROR(&stream));
        return 1; /* Failure */
    }
}
