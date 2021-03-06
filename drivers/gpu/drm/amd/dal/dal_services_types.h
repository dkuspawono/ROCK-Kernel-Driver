/*
 * Copyright 2012-15 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * Authors: AMD
 *
 */

#ifndef __DAL_SERVICES_TYPES_H__
#define __DAL_SERVICES_TYPES_H__

#define INVALID_DISPLAY_INDEX 0xffffffff

#if defined __KERNEL__

#include <asm/byteorder.h>
#include <linux/types.h>
#include <drm/drmP.h>

#include "cgs_linux.h"

#if defined(__BIG_ENDIAN) && !defined(BIGENDIAN_CPU)
#define BIGENDIAN_CPU
#elif defined(__LITTLE_ENDIAN) && !defined(LITTLEENDIAN_CPU)
#define LITTLEENDIAN_CPU
#endif

#undef READ
#undef WRITE
#undef FRAME_SIZE

#define dal_output_to_console(fmt, ...) DRM_INFO(fmt, ##__VA_ARGS__)

#define dal_error(fmt, ...) DRM_ERROR(fmt, ##__VA_ARGS__)

#define dal_debug(fmt, ...) DRM_DEBUG_KMS(fmt, ##__VA_ARGS__)

#define dal_vlog(fmt, args) vprintk(fmt, args)

#define dal_min(x, y) min(x, y)
#define dal_max(x, y) max(x, y)

#endif

#endif
