/*
 * QEMU VNC display driver
 * 
 * Copyright (C) 2006 Anthony Liguori <anthony@codemonkey.ws>
 * Copyright (C) 2006 Fabrice Bellard
 * Copyright (C) 2006 Christian Limpach <Christian.Limpach@xensource.com>
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


#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "libvnc/libvnc.h"

#define	qemu_malloc(s) malloc((s))
#define	qemu_mallocz(s) calloc(1, (s))
#define	qemu_free(p) free((p))

/* control characters */
#define NUL 0x00
#define SOH 0x01
#define STX 0x02
#define BEL 0x07
#define BS 0x08
#define HT 0x09
#define LF 0x0A
#define VT 0x0B
#define FF 0x0C
#define CR 0x0D
#define SO 0x0E
#define SI 0x0F
#define CAN 0x18
#define ESN 0x1A
#define ESC 0x1B
#define DEL 0x7F
#define CSI 0x9B

struct CharDriverState {
    void *opaque;
    int (*chr_write)(struct CharDriverState *s, const uint8_t *buf, int len);
};
typedef struct CharDriverState CharDriverState;

CharDriverState *text_console_init(DisplayState *);
void kbd_put_keysym(int keysym);
void console_select(unsigned int index);
void console_set_input(CharDriverState *s, int fd, void *opaque);
int console_input_fd(CharDriverState *s);
unsigned char nrof_clients_connected(CharDriverState *s);

int mouse_is_absolute(void *);
void mouse_event(int dx, int dy, int dz, int buttons_state, void *opaque);

void dump_console_to_file(CharDriverState *chr, char *fn);
void load_console_from_file(CharDriverState *chr, char *fn);
