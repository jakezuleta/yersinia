/* global.h
 * Global definitions and amazing splash ;)
 *
 * Yersinia
 * By David Barroso <tomac@yersinia.net> and Alfredo Andres <aandreswork@hotmail.com>
 * Copyright 2005, 2006, 2007 Alfredo Andres and David Barroso
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef __GLOBAL_H__
#define __GLOBAL_H__

#include "interfaces.h"
#include "protocols.h"


pthread_mutex_t mutex_ctime;

struct  packet_stats packet_stats;
struct  packet_queue queue[MAX_PROTOCOLS];
int8_t  fatal_error;
u_int32_t uptime;
extern  struct protocol_def protocols[MAX_PROTOCOLS];

#if (defined(SOLARIS) && !defined(HAVE_STRERROR))
extern char *sys_errlist[];
#endif /* SOLARIS && !HAVE_STRERROR */

/* begin binary data: */
int8_t bin_data[] = /* 2696 */
{ 0x1B,0x5B,0x30,0x6D,0x1B,0x5B,0x31,0x3B,0x33,0x30,0x6D,0x20,0x20,0x20,0x20
,0xDB,0xB2,0xDB,0xDB,0xB2,0xB2,0xDB,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x1B,0x5B,0x30,0x3B,0x33,0x37
,0x6D,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x0D,0x0A,0x1B,0x5B,0x41,0x1B,0x5B,0x37
,0x39,0x43,0x20,0x0A,0x1B,0x5B,0x31,0x3B,0x33,0x30,0x6D,0x20,0x20,0x20,0xB2
,0xDB,0x1B,0x5B,0x35,0x3B,0x33,0x34,0x6D,0xB0,0xB0,0xB0,0xB2,0xB2,0x1B,0x5B
,0x30,0x3B,0x31,0x3B,0x33,0x30,0x6D,0xDB,0xB2,0xB2,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x1B,0x5B,0x30
,0x3B,0x33,0x37,0x6D,0x20,0x20,0x1B,0x5B,0x33,0x34,0x6D,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x1B,0x5B,0x33,0x37,0x6D,0x20
,0x20,0x20,0x20,0x0D,0x0A,0x1B,0x5B,0x41,0x1B,0x5B,0x37,0x39,0x43,0x20,0x0A
,0x1B,0x5B,0x31,0x3B,0x33,0x30,0x6D,0x20,0xDB,0xB2,0x1B,0x5B,0x35,0x3B,0x33
,0x34,0x6D,0xB2,0xB2,0xB0,0x1B,0x5B,0x30,0x3B,0x31,0x3B,0x33,0x36,0x6D,0xDB
,0xDB,0xDB,0x1B,0x5B,0x35,0x3B,0x33,0x34,0x6D,0xB0,0xB2,0x1B,0x5B,0x30,0x3B
,0x31,0x3B,0x33,0x30,0x6D,0xDB,0xB2,0xB2,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x1B,0x5B,0x30,0x3B,0x33,0x37,0x6D
,0x20,0x1B,0x5B,0x33,0x34,0x6D,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x1B,0x5B
,0x31,0x3B,0x33,0x31,0x6D,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x1B,0x5B,0x30,0x3B,0x33,0x34,0x6D,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x0D,0x0A,0x1B,0x5B,0x41,0x1B
,0x5B,0x37,0x39,0x43,0x20,0x0A,0x1B,0x5B,0x31,0x3B,0x33,0x30,0x6D,0xB2,0xB2
,0x1B,0x5B,0x35,0x3B,0x33,0x34,0x6D,0xB0,0xB2,0xB0,0x1B,0x5B,0x30,0x3B,0x31
,0x3B,0x33,0x36,0x6D,0xDB,0xB1,0x1B,0x5B,0x33,0x34,0x6D,0xB2,0x1B,0x5B,0x33
,0x36,0x6D,0xB1,0xDB,0x1B,0x5B,0x35,0x3B,0x33,0x34,0x6D,0xB2,0xB0,0xB0,0x1B
,0x5B,0x30,0x3B,0x31,0x3B,0x33,0x30,0x6D,0xB2,0xB2,0xB2,0xDB,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x1B,0x5B,0x30,0x3B,0x33,0x34,0x6D
,0x20,0x20,0x20,0x20,0x1B,0x5B,0x31,0x3B,0x33,0x31,0x6D,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x1B,0x5B,0x30,0x3B,0x33,0x34,0x6D,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x0D,0x0A,0x1B,0x5B,0x41,0x1B,0x5B,0x37,0x39,0x43
,0x20,0x0A,0x1B,0x5B,0x31,0x3B,0x35,0x6D,0xB0,0xB2,0xB0,0xB0,0x1B,0x5B,0x30
,0x3B,0x31,0x3B,0x33,0x36,0x6D,0xDB,0xB1,0x1B,0x5B,0x33,0x34,0x6D,0xB2,0xB1
,0xB2,0xB2,0x1B,0x5B,0x33,0x36,0x6D,0xB1,0xDB,0x1B,0x5B,0x35,0x3B,0x33,0x34
,0x6D,0xB2,0xB2,0xB0,0x1B,0x5B,0x30,0x3B,0x31,0x3B,0x33,0x30,0x6D,0xB2,0xB2
,0xDB,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x1B,0x5B
,0x30,0x3B,0x33,0x34,0x6D,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x1B,0x5B,0x33,0x37,0x6D,0x20,0x20,0x20,0x20,0x0D
,0x0A,0x1B,0x5B,0x41,0x1B,0x5B,0x37,0x39,0x43,0x20,0x0A,0x1B,0x5B,0x31,0x3B
,0x33,0x30,0x6D,0xB2,0x1B,0x5B,0x35,0x3B,0x33,0x34,0x6D,0xB0,0xB2,0xB0,0x1B
,0x5B,0x30,0x3B,0x31,0x3B,0x33,0x36,0x6D,0xDB,0xB1,0x1B,0x5B,0x33,0x34,0x6D
,0xB2,0xB1,0xB1,0xB2,0xB2,0x1B,0x5B,0x33,0x36,0x6D,0xB1,0xDB,0x1B,0x5B,0x35
,0x3B,0x33,0x34,0x6D,0xB0,0xB0,0xB2,0xB0,0x1B,0x5B,0x30,0x3B,0x31,0x3B,0x33
,0x30,0x6D,0xB2,0xB2,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x1B
,0x5B,0x30,0x3B,0x33,0x37,0x6D,0x20,0x20,0x1B,0x5B,0x33,0x34,0x6D,0x20,0x20
,0x1B,0x5B,0x31,0x3B,0x33,0x31,0x6D,0x20,0x59,0x65,0x72,0x73,0x69,0x6E,0x69
,0x61,0x2E,0x2E,0x2E,0x1B,0x5B,0x30,0x3B,0x33,0x37,0x6D,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x1B,0x5B,0x33,0x34,0x6D,0x20,0x20
,0x20,0x20,0x1B,0x5B,0x33,0x37,0x6D,0x20,0x20,0x20,0x0D,0x0A,0x1B,0x5B,0x41
,0x1B,0x5B,0x37,0x39,0x43,0x20,0x0A,0x1B,0x5B,0x31,0x3B,0x33,0x30,0x6D,0xB2
,0xB2,0x1B,0x5B,0x35,0x3B,0x33,0x34,0x6D,0xB0,0xB0,0xB2,0x1B,0x5B,0x30,0x3B
,0x31,0x3B,0x33,0x36,0x6D,0xDB,0x1B,0x5B,0x33,0x34,0x6D,0xB2,0xB2,0xB1,0xB2
,0xB2,0xB1,0xB2,0x1B,0x5B,0x33,0x36,0x6D,0xB1,0xDB,0x1B,0x5B,0x35,0x3B,0x33
,0x34,0x6D,0xB0,0xB2,0x1B,0x5B,0x30,0x3B,0x31,0x3B,0x33,0x30,0x6D,0xDB,0xDB
,0xB2,0xB2,0xB2,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x1B,0x5B,0x30,0x3B
,0x33,0x37,0x6D,0x20,0x1B,0x5B,0x33,0x34,0x6D,0x20,0x20,0x1B,0x5B,0x33,0x37
,0x6D,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x1B,0x5B,0x33,0x34
,0x6D,0x20,0x20,0x20,0x1B,0x5B,0x33,0x37,0x6D,0x20,0x20,0x20,0x0D,0x0A,0x1B
,0x5B,0x41,0x1B,0x5B,0x37,0x39,0x43,0x20,0x0A,0x1B,0x5B,0x31,0x3B,0x33,0x30
,0x6D,0xDB,0xB2,0x1B,0x5B,0x35,0x3B,0x33,0x34,0x6D,0xB2,0xB2,0xB0,0x1B,0x5B
,0x30,0x3B,0x31,0x3B,0x33,0x36,0x6D,0xDB,0xB1,0x1B,0x5B,0x33,0x34,0x6D,0xB2
,0xB2,0xB2,0xB1,0xB1,0xB2,0xB2,0x1B,0x5B,0x33,0x36,0x6D,0xB1,0xDB,0xDB,0x1B
,0x5B,0x35,0x3B,0x33,0x34,0x6D,0xB0,0xB2,0xB0,0x1B,0x5B,0x30,0x3B,0x31,0x3B
,0x33,0x30,0x6D,0xDB,0xDB,0xB2,0xB2,0xB2,0x20,0x20,0x20,0x20,0x1B,0x5B,0x30
,0x3B,0x33,0x37,0x6D,0x20,0x20,0x1B,0x5B,0x33,0x34,0x6D,0x20,0x20,0x1B,0x5B
,0x33,0x37,0x6D,0x20,0x1B,0x5B,0x31,0x6D,0x54,0x68,0x65,0x20,0x1B,0x5B,0x33
,0x30,0x6D,0x42,0x6C,0x61,0x63,0x6B,0x20,0x44,0x65,0x61,0x74,0x68,0x1B,0x5B
,0x33,0x37,0x6D,0x20,0x66,0x6F,0x72,0x20,0x6E,0x6F,0x77,0x61,0x64,0x61,0x79
,0x73,0x20,0x6E,0x65,0x74,0x77,0x6F,0x72,0x6B,0x73,0x1B,0x5B,0x30,0x6D,0x20
,0x20,0x1B,0x5B,0x33,0x34,0x6D,0x20,0x20,0x20,0x1B,0x5B,0x33,0x37,0x6D,0x20
,0x20,0x20,0x0D,0x0A,0x1B,0x5B,0x41,0x1B,0x5B,0x37,0x39,0x43,0x20,0x0A,0x1B
,0x5B,0x31,0x3B,0x33,0x30,0x6D,0x20,0xB2,0xB2,0x1B,0x5B,0x35,0x3B,0x33,0x34
,0x6D,0xB2,0xB0,0xB2,0x1B,0x5B,0x30,0x3B,0x31,0x3B,0x33,0x36,0x6D,0xDB,0xDB
,0xB1,0x1B,0x5B,0x33,0x34,0x6D,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0x1B
,0x5B,0x33,0x36,0x6D,0xB1,0xDB,0x1B,0x5B,0x35,0x3B,0x33,0x34,0x6D,0xB0,0xB0
,0xB2,0xB2,0xB0,0x1B,0x5B,0x30,0x3B,0x31,0x3B,0x33,0x30,0x6D,0xB2,0xB2,0x20
,0x20,0x20,0x20,0x1B,0x5B,0x30,0x3B,0x33,0x37,0x6D,0x20,0x1B,0x5B,0x33,0x34
,0x6D,0x20,0x20,0x1B,0x5B,0x33,0x37,0x6D,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x1B,0x5B,0x33,0x34,0x6D,0x20,0x20,0x1B,0x5B,0x33,0x37
,0x6D,0x20,0x20,0x20,0x0D,0x0A,0x1B,0x5B,0x41,0x1B,0x5B,0x37,0x39,0x43,0x20
,0x0A,0x1B,0x5B,0x31,0x3B,0x33,0x30,0x6D,0x20,0xB2,0xDB,0xDB,0x1B,0x5B,0x35
,0x3B,0x33,0x34,0x6D,0xB0,0xB0,0xB2,0xB0,0x1B,0x5B,0x30,0x3B,0x31,0x3B,0x33
,0x36,0x6D,0xDB,0xB1,0x1B,0x5B,0x33,0x34,0x6D,0xB2,0xB2,0xB1,0xB1,0xB1,0xB2
,0xB2,0xB2,0xB2,0xB2,0x1B,0x5B,0x33,0x36,0x6D,0xB1,0xDB,0x1B,0x5B,0x35,0x3B
,0x33,0x34,0x6D,0xB0,0xB2,0xB2,0x1B,0x5B,0x30,0x3B,0x31,0x3B,0x33,0x30,0x6D
,0xDB,0xB2,0xB2,0x20,0x20,0x20,0x1B,0x5B,0x30,0x3B,0x33,0x34,0x6D,0x20,0x20
,0x1B,0x5B,0x33,0x37,0x6D,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x1B,0x5B
,0x31,0x3B,0x33,0x31,0x6D,0x62,0x79,0x20,0x53,0x6C,0x61,0x79,0x20,0x26,0x20
,0x74,0x6F,0x6D,0x61,0x63,0x1B,0x5B,0x30,0x3B,0x33,0x37,0x6D,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x1B
,0x5B,0x33,0x34,0x6D,0x20,0x20,0x20,0x1B,0x5B,0x33,0x37,0x6D,0x20,0x20,0x20
,0x0D,0x0A,0x1B,0x5B,0x41,0x1B,0x5B,0x37,0x39,0x43,0x20,0x0A,0x1B,0x5B,0x31
,0x3B,0x33,0x30,0x6D,0x20,0x20,0xDB,0xB2,0xB2,0xDB,0x1B,0x5B,0x35,0x3B,0x33
,0x34,0x6D,0xB2,0xB0,0xB0,0x1B,0x5B,0x30,0x3B,0x31,0x3B,0x33,0x36,0x6D,0xDB
,0xB1,0x1B,0x5B,0x33,0x34,0x6D,0xB2,0xB2,0xB2,0xB1,0xB1,0xB2,0xB2,0xB2,0xB2
,0xB2,0xB2,0x1B,0x5B,0x33,0x36,0x6D,0xB1,0xDB,0x1B,0x5B,0x35,0x3B,0x33,0x34
,0x6D,0xB2,0xB0,0xB0,0x1B,0x5B,0x30,0x3B,0x31,0x3B,0x33,0x30,0x6D,0xB2,0xB2
,0xDB,0x1B,0x5B,0x30,0x3B,0x33,0x37,0x6D,0x20,0x1B,0x5B,0x33,0x34,0x6D,0x20
,0x20,0x20,0x1B,0x5B,0x33,0x37,0x6D,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x1B,0x5B,0x33,0x34,0x6D,0x20,0x20,0x20,0x1B,0x5B,0x33,0x37,0x6D,0x20
,0x20,0x20,0x0D,0x0A,0x1B,0x5B,0x41,0x1B,0x5B,0x37,0x39,0x43,0x20,0x0A,0x1B
,0x5B,0x31,0x3B,0x33,0x30,0x6D,0x20,0x20,0x20,0x20,0x20,0xB2,0xB2,0xDB,0x1B
,0x5B,0x35,0x3B,0x33,0x34,0x6D,0xB2,0xB0,0x1B,0x5B,0x30,0x3B,0x31,0x3B,0x33
,0x36,0x6D,0xDB,0xB1,0xB1,0x1B,0x5B,0x33,0x34,0x6D,0xB2,0xB2,0xB1,0xB1,0xB1
,0xB1,0xB1,0xB1,0xB2,0xB2,0xB2,0x1B,0x5B,0x33,0x36,0x6D,0xB1,0xDB,0x1B,0x5B
,0x35,0x3B,0x33,0x34,0x6D,0xB0,0xB2,0xB0,0x1B,0x5B,0x30,0x3B,0x31,0x3B,0x33
,0x30,0x6D,0xB2,0xDB,0x1B,0x5B,0x30,0x3B,0x33,0x34,0x6D,0x20,0x20,0x1B,0x5B
,0x33,0x37,0x6D,0x20,0x20,0x20,0x20,0x20,0x20,0x1B,0x5B,0x31,0x3B,0x33,0x31
,0x6D,0x68,0x74,0x74,0x70,0x3A,0x2F,0x2F,0x77,0x77,0x77,0x2E,0x79,0x65,0x72
,0x73,0x69,0x6E,0x69,0x61,0x2E,0x6E,0x65,0x74,0x20,0x20,0x20,0x20,0x20,0x1B
,0x5B,0x30,0x3B,0x33,0x37,0x6D,0x20,0x20,0x20,0x20,0x20,0x20,0x1B,0x5B,0x33
,0x34,0x6D,0x20,0x20,0x1B,0x5B,0x33,0x37,0x6D,0x20,0x20,0x20,0x20,0x0D,0x0A
,0x1B,0x5B,0x41,0x1B,0x5B,0x37,0x39,0x43,0x20,0x0A,0x1B,0x5B,0x31,0x3B,0x33
,0x30,0x6D,0x20,0x20,0x20,0x20,0x20,0x20,0xDB,0xB2,0x1B,0x5B,0x35,0x3B,0x33
,0x34,0x6D,0xB0,0xB2,0xB2,0x1B,0x5B,0x30,0x3B,0x31,0x3B,0x33,0x36,0x6D,0xDB
,0xDB,0xB1,0xB1,0xB1,0x1B,0x5B,0x33,0x34,0x6D,0xB2,0xB2,0xB1,0xB1,0xB1,0xB1
,0xB2,0xB2,0xB2,0x1B,0x5B,0x33,0x36,0x6D,0xDB,0xDB,0xDB,0x1B,0x5B,0x35,0x3B
,0x33,0x34,0x6D,0xB2,0x1B,0x5B,0x30,0x3B,0x31,0x3B,0x33,0x30,0x6D,0xDB,0xB2
,0x1B,0x5B,0x30,0x3B,0x33,0x34,0x6D,0x20,0x20,0x1B,0x5B,0x33,0x37,0x6D,0x20
,0x20,0x20,0x20,0x20,0x20,0x1B,0x5B,0x33,0x31,0x6D,0x20,0x20,0x20,0x20,0x79
,0x65,0x72,0x73,0x69,0x6E,0x69,0x61,0x40,0x79,0x65,0x72,0x73,0x69,0x6E,0x69
,0x61,0x2E,0x6E,0x65,0x74,0x20,0x1B,0x5B,0x33,0x37,0x6D,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x1B,0x5B,0x33,0x34,0x6D,0x20,0x20,0x1B
,0x5B,0x33,0x37,0x6D,0x20,0x0D,0x0A,0x1B,0x5B,0x41,0x1B,0x5B,0x37,0x39,0x43
,0x20,0x0A,0x1B,0x5B,0x31,0x3B,0x33,0x30,0x6D,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0xDB,0xB2,0xB2,0x1B,0x5B,0x35,0x3B,0x33,0x34,0x6D,0xB0,0xB0,0xB2,0x1B
,0x5B,0x30,0x3B,0x31,0x3B,0x33,0x36,0x6D,0xDB,0xDB,0xB1,0xB1,0xB1,0x1B,0x5B
,0x33,0x34,0x6D,0xB2,0xB2,0xB2,0xB1,0xB2,0xB2,0xB2,0x1B,0x5B,0x33,0x36,0x6D
,0xDB,0xDB,0x1B,0x5B,0x35,0x3B,0x33,0x34,0x6D,0xB2,0xB0,0x1B,0x5B,0x30,0x3B
,0x31,0x3B,0x33,0x30,0x6D,0xDB,0xDB,0x1B,0x5B,0x30,0x3B,0x33,0x34,0x6D,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x1B
,0x5B,0x33,0x37,0x6D,0x20,0x20,0x20,0x0D,0x0A,0x1B,0x5B,0x41,0x1B,0x5B,0x37
,0x39,0x43,0x20,0x0A,0x1B,0x5B,0x31,0x3B,0x33,0x30,0x6D,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0xB2,0xDB,0x1B,0x5B,0x35,0x3B,0x33,0x34,0x6D,0xB2
,0xB0,0xB2,0xB2,0xB0,0x1B,0x5B,0x30,0x3B,0x31,0x3B,0x33,0x36,0x6D,0xDB,0xB1
,0xB1,0xB1,0x1B,0x5B,0x33,0x34,0x6D,0xB2,0xB2,0xB2,0xB2,0x1B,0x5B,0x33,0x36
,0x6D,0xB1,0xDB,0x1B,0x5B,0x35,0x3B,0x33,0x34,0x6D,0xB2,0xB0,0x1B,0x5B,0x30
,0x3B,0x31,0x3B,0x33,0x30,0x6D,0xDB,0xB2,0xB2,0x1B,0x5B,0x30,0x3B,0x33,0x34
,0x6D,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x1B,0x5B,0x33,0x37,0x6D,0x20,0x20,0x0D,0x0A,0x1B,0x5B,0x41,0x1B
,0x5B,0x37,0x39,0x43,0x20,0x0A,0x1B,0x5B,0x31,0x3B,0x33,0x30,0x6D,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0xB2,0xDB,0xB2,0xB2,0xDB,0x1B,0x5B,0x35
,0x3B,0x33,0x34,0x6D,0xB0,0xB2,0xB0,0x1B,0x5B,0x30,0x3B,0x31,0x3B,0x33,0x36
,0x6D,0xDB,0xDB,0xDB,0xDB,0xDB,0xB1,0xDB,0xDB,0x1B,0x5B,0x35,0x3B,0x33,0x34
,0x6D,0xB0,0xB2,0x1B,0x5B,0x30,0x3B,0x31,0x3B,0x33,0x30,0x6D,0xB2,0xB2,0xB2
,0x1B,0x5B,0x30,0x3B,0x33,0x37,0x6D,0x20,0x20,0x20,0x1B,0x5B,0x31,0x3B,0x33
,0x31,0x6D,0x20,0x1B,0x5B,0x30,0x3B,0x33,0x37,0x6D,0x20,0x1B,0x5B,0x31,0x3B
,0x33,0x34,0x6D,0x50,0x72,0x75,0x6E,0x65,0x20,0x79,0x6F,0x75,0x72,0x20,0x4D
,0x53,0x54,0x50,0x2C,0x20,0x52,0x53,0x54,0x50,0x2C,0x20,0x53,0x54,0x50,0x20
,0x74,0x72,0x65,0x65,0x73,0x21,0x21,0x21,0x21,0x1B,0x5B,0x30,0x3B,0x33,0x37
,0x6D,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x0D,0x0A,0x1B,0x5B,0x41,0x1B
,0x5B,0x37,0x39,0x43,0x20,0x0A,0x1B,0x5B,0x31,0x3B,0x33,0x30,0x6D,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x1B,0x5B,0x30,0x3B,0x33
,0x34,0x6D,0x20,0x1B,0x5B,0x31,0x3B,0x33,0x30,0x6D,0xB2,0xB2,0xDB,0x1B,0x5B
,0x35,0x3B,0x33,0x34,0x6D,0xB0,0xB0,0xB2,0xB2,0xB2,0xB0,0xB0,0xB2,0xB0,0xB0
,0x1B,0x5B,0x30,0x3B,0x31,0x3B,0x33,0x30,0x6D,0xDB,0xB2,0xB2,0x20,0x20,0x1B
,0x5B,0x30,0x3B,0x33,0x37,0x6D,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x0D,0x0A,0x1B,0x5B,0x41,0x1B
,0x5B,0x37,0x39,0x43,0x20,0x0A,0x1B,0x5B,0x30,0x6D,0x1A};
/* end binary data. size = 2696 bytes */


#endif
/* vim:set tabstop=4:set expandtab:set shiftwidth=4:set textwidth=78: */
