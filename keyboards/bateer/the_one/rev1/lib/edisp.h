/*****************************************************************************
* | File      	:   edisp.h
* | Author      :   Tran Ta Tuan <@tuantran39>
* | Function    :   Provides API for Waveshare 1.54inch e-paper V2.
* | Info        :   Used for Raspberry Pi RP2040 board.
*----------------
* | Version     :   1.0
* | Date        :   5 Apr 2026
* | Info        :   Adapted from Waveshare source codes to work with RP2024.
*                   See their licenses in THIRD_PARTY_LICENSES.txt
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
******************************************************************************/

#pragma once

#include "fonts.h"
#include "stdbool.h"
#include "stdint.h"

/* Waveform full refresh. */
extern unsigned char WF_Full_1IN54[159];

/* Waveform partial refresh. */
extern unsigned char WF_PARTIAL_1IN54_0[159];

/* @brief Setup the SPI configurations. */
void edisp_spi_config(void);

/**
 * @brief Initialize the e-Ink display FULL.
 *
 * Perform hardware reset and sending initialization commands & data.
 */
void edisp_init_full(void);

/**
 * @brief Initialize the e-Ink display PARTIAL.
 *
 * Perform hardware reset and sending initialization commands & data.
 */
void edisp_init_partial(void);

/**
 * @brief Completely clear the display with white pixels.
 *
 * Send a white frame buffer and reset the screen.
 */
void edisp_clear_display(void);

/**
 * @brief Put the e-Ink display in deep sleep mode.
 */
void edisp_sleep(void);

/**
 * @brief Update the entire screen with current buffer.
 */
void edisp_update_full(void);

/**
 * @brief Update a specific region on the screen with current buffer.
 * @param x The X pixel address of the start point.
 * @param y The Y pixel address of the start point.
 * @param w The width of the region.
 * @param h The height of the region.
 */
void edisp_update_region(int x, int y, int w, int h);

/**
 * @brief Draw a pixel and insert to the current frame buffer.
 * @param x The X pixel address.
 * @param y The Y pixel address.
 * @param color White = true. Black = false.
 */
void edisp_draw_pixel(int x, int y, bool color);

/**
 * @brief Draw a black line and insert to the current frame buffer.
 * @param x0 The X pixel address of start point.
 * @param y0 The Y pixel address of the start point.
 * @param x1 The X pixel address of end point.
 * @param y1 The Y pixel address of end point.
 * @param color White = true. Black = false.
 */
void edisp_draw_line(int x0, int y0, int x1, int y1, bool color);

/**
 * @brief Draw a black-border rectangle and insert to the current frame buffer.
 * @param x The X pixel address of the start point.
 * @param y The Y pixel address of the start point.
 * @param w The width of the rectangle.
 * @param h The height of the rectangle.
 * @param color White = true. Black = false.
 */
void edisp_draw_rectangle(int x, int y, int w, int h, bool color);

/**
 * @brief Draw a black-filed rectangle and insert to the current frame buffer.
 * @param x The X pixel address of the start point.
 * @param y The Y pixel address of the start point.
 * @param w The width of the rectangle.
 * @param h The height of the rectangle.
 * @param color White = true. Black = false.
 */
void edisp_draw_rectangle_filled(int x, int y, int w, int h, bool color);

/**
 * @brief Draw a black string and insert to the current frame buffer.
 * @param x The X pixel address of the start point.
 * @param y The Y pixel address of the start point.
 * @param str The string to be displayed.
 * @param font The font of the displayed string.
 * @param color White = true. Black = false.
 */
void edisp_draw_string(int x, int y, const char *str, sFONT *font, bool color);
