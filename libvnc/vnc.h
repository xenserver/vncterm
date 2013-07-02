/*
    Copyright (c) Citrix Systems Inc.

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef QEMU

#include <errno.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#include "libvnc.h"

#define	qemu_mallocz(s) calloc(1, (s))
#define	qemu_free(p) free((p))
#define	vnc_mallocz(s) calloc(1, (s))
#define	vnc_free(p) free((p))

#ifndef VNCTERM_BIOS_DIR
#define	bios_dir "/usr/share/xen/qemu"
#else
#define	bios_dir VNCTERM_BIOS_DIR
#endif

#define	MIN(a,b) (((a)<(b))?(a):(b))

struct QEMUTimer {
};
typedef struct QEMUTimer QEMUTimer;

#else
#include "vl.h"
#define	vnc_mallocz(s) qemu_mallocz(s)
#define	vnc_free(p) qemu_free((p))
#endif

extern char vncpasswd[64];
extern unsigned char challenge[AUTHCHALLENGESIZE];
