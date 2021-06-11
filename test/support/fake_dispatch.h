/*
 *  Copyright (C) 2021 Express VPN International Ltd.
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2
 *  of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef _HE_FAKE_DISPATCH
#define _HE_FAKE_DISPATCH

#include <stdarg.h>
#include <he.h>

/**
 *  This function should NEVER be defined and only used in test files by
 *  #include "mock_fake_dispatch.h"
 */
int dispatch(char *func, ...);

/**
 *  This function should NEVER be defined and only used in test files by
 *  #include "mock_fake_dispatch.h"
 */
int dispatch_conn(char *func, he_conn_t *client);

#endif
