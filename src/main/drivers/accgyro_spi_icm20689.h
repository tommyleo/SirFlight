/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#define ICM20689_WHO_AM_I_CONST             (0x98)
#define ICM20689_BIT_RESET                  (0x80)

bool icm20689SpiDetect(void);

bool icm20689SpiAccDetect(acc_t *acc);
bool icm20689SpiGyroDetect(gyro_t *gyro);

bool ICM20689WriteRegister(uint8_t reg, uint8_t data);
bool ICM20689ReadRegister(uint8_t reg, uint8_t length, uint8_t *data);
