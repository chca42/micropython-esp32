/*
 * This file is part of the SHA2017 Micro Python fork
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Christian Carlowitz
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
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "modfreedomgfx_eink.h"
#include <badge_eink.h>

void freedomgfxInit(void)
{
	//
}

void freedomgfxDeinit(void)
{
	//
}

uint32_t freedomgfxPoll(void)
{
	uint32_t btn = badge_input_get_event(0);
	return btn;
}

void freedomgfxDraw(uint8_t* img)
{
	badge_eink_display(img, DISPLAY_FLAG_FULL_UPDATE);
}
