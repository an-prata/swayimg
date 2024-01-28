// SPDX-License-Identifier: MIT
// Text renderer.
// Copyright (C) 2022 Artem Senichev <artemsen@gmail.com>

#pragma once

#include "pixmap.h"

/**
 * Initialize font.
 */
void font_init(void);

/**
 * Free font resources.
 */
void font_free(void);

/**
 * Set font scaling in HiDPI mode.
 * @param scale scale factor
 */
void font_set_scale(size_t scale);

/**
 * Get single line height for current font.
 * @return line height in pixels
 */
size_t font_height(void);

/**
 * Print single line on window buffer.
 * @param pm destination pixmap
 * @param x,y top-left coordinates of text
 * @param text string to print
 * @return width of the line in pixels
 */
size_t font_print(struct pixmap* pm, size_t x, size_t y, const wchar_t* text);
