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

#ifndef _HE_FAKE_RNG
#define _HE_FAKE_RNG

#include <he.h>

/**
 *  This function should NEVER be defined and only used in test files by
 *  #include "mock_fake_rng.h"
 */
int wc_InitRng(RNG *rng);

/**
 *  This function should NEVER be defined and only used in test files by
 *  #include "mock_fake_rng.h"
 */
int wc_RNG_GenerateBlock(RNG *rng, byte *bytes, uint32_t sz);

#endif
