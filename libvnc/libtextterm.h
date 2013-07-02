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

#ifndef _LIBTEXTTERM_H
#define _LIBTEXTTERM_H

struct TextDisplayState {
    uint8_t *data;
    void *opaque;

    void *(*init_timer)(void (*)(void *), void *);
    uint64_t (*get_clock)(void);
    int (*set_timer)(void *, uint64_t);

    int (*set_fd_handler)(int, int (*)(void *), void (*)(void *),
			  void (*)(void *), void *);
    int (*set_fd_error_handler)(int, void (*)(void *));

    void (*chr_write)(struct TextDisplayState *s, const uint8_t *buf, int len);

};
typedef struct TextDisplayState TextDisplayState;

struct sockaddr;

int text_term_display_init(TextDisplayState *ds, struct sockaddr *sa,
                           int find_unused, char *title);
void text_term_display_set_input(TextDisplayState *ds, int fd, void *opaque);

#endif /* _LIBTEXTTERM_H */
