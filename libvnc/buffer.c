/*
 * QEMU VNC display driver
 * 
 * Copyright (C) 2006 Fabrice Bellard
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "buffer.h"


void buffer_reserve(Buffer *buffer, size_t len)
{
    if ((buffer->capacity - buffer->offset) < len) {
	buffer->capacity += (len + 1024);
	buffer->buffer = realloc(buffer->buffer, buffer->capacity);
	if (buffer->buffer == NULL) {
	    fprintf(stderr, "vnc: out of memory\n");
	    exit(1);
	}
    }
}

int buffer_empty(Buffer *buffer)
{
    return buffer->offset == 0;
}

uint8_t *buffer_end(Buffer *buffer)
{
    return buffer->buffer + buffer->offset;
}

void buffer_reset(Buffer *buffer)
{
    buffer->offset = 0;
}

void buffer_append(Buffer *buffer, const void *data, size_t len)
{
    if (buffer->offset + len > buffer->capacity) {
	fprintf(stderr, "vnc: buffer overflow prevented\n");
	exit(1);
    }
    memcpy(buffer->buffer + buffer->offset, data, len);
    buffer->offset += len;
}

