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

/* headers to use the BSD sockets */
#ifndef QEMU_SOCKET_H
#define QEMU_SOCKET_H

#ifdef _WIN32

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>

#define socket_error() WSAGetLastError()
#undef EINTR
#define EWOULDBLOCK WSAEWOULDBLOCK
#define EINTR       WSAEINTR
#define EINPROGRESS WSAEINPROGRESS

#else

#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <sys/un.h>

#define socket_error() errno
#define closesocket(s) close(s)

#include <unistd.h>
#include <fcntl.h>
static inline void socket_set_nonblock(int fd)
{
    fcntl(fd, F_SETFL, O_NONBLOCK);
}

#endif /* !_WIN32 */

#endif /* QEMU_SOCKET_H */
