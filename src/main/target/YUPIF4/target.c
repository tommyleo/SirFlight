/* This file is part of Cleanflight.
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

#include <stdint.h>

#include <platform.h>
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"

const uint16_t multiPPM[] = {
    PWM1  | (MAP_TO_PPM_INPUT << 8),     // PPM input
    PWM2  | (MAP_TO_MOTOR_OUTPUT << 8),  // Swap to servo if needed
    PWM3  | (MAP_TO_MOTOR_OUTPUT << 8),  // Swap to servo if needed
    PWM4  | (MAP_TO_MOTOR_OUTPUT << 8),
    PWM5  | (MAP_TO_MOTOR_OUTPUT << 8),
    PWM6 | (MAP_TO_MOTOR_OUTPUT << 8),
    PWM7 | (MAP_TO_MOTOR_OUTPUT << 8),
    0xFFFF
};

const uint16_t multiPWM[] = {
    PWM1  | (MAP_TO_PWM_INPUT << 8),     // input #1
    PWM2  | (MAP_TO_PWM_INPUT << 8),
    PWM3  | (MAP_TO_PWM_INPUT << 8),
    PWM4  | (MAP_TO_PWM_INPUT << 8),
    PWM5  | (MAP_TO_PWM_INPUT << 8),
    PWM6  | (MAP_TO_PWM_INPUT << 8),     // input #6
    PWM7  | (MAP_TO_MOTOR_OUTPUT  << 8), // motor #1 or servo #1 (swap to servo if needed)
    0xFFFF
};

const uint16_t airPPM[] = {
    PWM1  | (MAP_TO_PPM_INPUT << 8),     // PPM input
    PWM2  | (MAP_TO_MOTOR_OUTPUT  << 8),
    PWM3  | (MAP_TO_MOTOR_OUTPUT  << 8),
    PWM4  | (MAP_TO_SERVO_OUTPUT  << 8),
    PWM5  | (MAP_TO_SERVO_OUTPUT  << 8),
    PWM6  | (MAP_TO_SERVO_OUTPUT  << 8),
    PWM7  | (MAP_TO_SERVO_OUTPUT  << 8),
    0xFFFF
};

const uint16_t airPWM[] = {
    PWM1  | (MAP_TO_PWM_INPUT << 8),     // input #1
    PWM2  | (MAP_TO_PWM_INPUT << 8),
    PWM3  | (MAP_TO_PWM_INPUT << 8),
    PWM4  | (MAP_TO_PWM_INPUT << 8),
    PWM5  | (MAP_TO_PWM_INPUT << 8),
    PWM6  | (MAP_TO_PWM_INPUT << 8),     // input #6
    PWM7  | (MAP_TO_MOTOR_OUTPUT  << 8), // motor #1
    0xFFFF
};


const timerHardware_t timerHardware[USABLE_TIMER_CHANNEL_COUNT] = {
    { TIM8, IO_TAG(PC8),   TIM_Channel_3, TIM8_BRK_TIM12_IRQn, 0, IOCFG_AF_PP, GPIO_AF_TIM8 }, // PPM
    { TIM5,  IO_TAG(PA0),  TIM_Channel_1, TIM5_IRQn,           1, IOCFG_AF_PP, GPIO_AF_TIM5 }, // S1_OUT
    { TIM5,  IO_TAG(PA1),  TIM_Channel_2, TIM5_IRQn,           1, IOCFG_AF_PP, GPIO_AF_TIM5 }, // S2_OUT
    { TIM2,  IO_TAG(PA2),  TIM_Channel_3, TIM3_IRQn,           1, IOCFG_AF_PP, GPIO_AF_TIM2 }, // S3_OUT
    { TIM2,  IO_TAG(PA3),  TIM_Channel_4, TIM2_IRQn,           1, IOCFG_AF_PP, GPIO_AF_TIM2 }, // S4_OUT
    { TIM3,  IO_TAG(PB0),  TIM_Channel_3, TIM3_IRQn,           1, IOCFG_AF_PP, GPIO_AF_TIM3 }, // S5_OUT
    { TIM4,  IO_TAG(PB7),  TIM_Channel_2, TIM4_IRQn,           1, IOCFG_AF_PP, GPIO_AF_TIM4 }, // S6_OUT
};
