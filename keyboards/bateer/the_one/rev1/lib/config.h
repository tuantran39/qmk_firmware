/*****************************************************************************
* | File      	:   config.h
* | Author      :   Tran Ta Tuan <@tuantran39>
* | Function    :   Defines hardward configurations.
* | Info        :   Used for Raspberry Pi RP2040 boards.
*----------------
* | Version     :   1.0
* | Date        :   7 Apr 2026
* | Info        :
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

#define EDISP_SPI spi1
#define EDISP_WIDTH 200
#define EDISP_HEIGHT 200
#define EDISP_PIN_MOSI 11
#define EDISP_PIN_SCK 10
#define EDISP_PIN_CS 13
#define EDISP_PIN_DC 9
#define EDISP_PIN_RST 8
#define EDISP_PIN_BUSY 7
