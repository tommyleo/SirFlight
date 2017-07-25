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

#define TARGET_BOARD_IDENTIFIER "YPF4"

#define SKIP_PID_FLOAT

#define CONFIG_START_FLASH_ADDRESS (0x08080000) //0x08080000 to 0x080A0000 (FLASH_Sector_8)

#define USBD_PRODUCT_STRING     "YupiF4"

#define LED0_PIN                PB6
#define LED1_PIN                PB4
//#define LED2_PIN                PB5

#define BEEPER                  PC9
//#define BEEPER_PWM_HZ           2200 // Beeper PWM frequency in Hz

//#define INVERTER                PB15 // PC0 used as inverter select GPIO
//#define INVERTER_USART          USART6

#define INVERTER_PIN_UART6      PB15

// Gyro interrupt
#define USE_EXTI
#define USE_MPU_DATA_READY_SIGNAL
#define MPU_INT_EXTI            PC4
//#define EXTI_CALLBACK_HANDLER_COUNT 2 // MPU data ready (mag disabled)

//ICM 20689
/*
#define ICM20689_CS_PIN          PA4
#define ICM20689_SPI_INSTANCE    SPI1

#define ACC
#define USE_ACC_SPI_ICM20689
#define ACC_ICM20689_ALIGN       CW90_DEG

#define GYRO
#define USE_GYRO_SPI_ICM20689
#define GYRO_ICM20689_ALIGN      CW90_DEG
*/

// MPU 6500
#define MPU6500_CS_PIN          PA4
#define MPU6500_SPI_INSTANCE    SPI1

#define ACC
#define USE_ACC_MPU6500
#define USE_ACC_SPI_MPU6500
#define ACC_MPU6500_ALIGN       CW90_DEG

#define GYRO
#define USE_GYRO_MPU6500
#define USE_GYRO_SPI_MPU6500
#define GYRO_MPU6500_ALIGN      CW90_DEG


#define USE_VCP
#define VBUS_SENSING_PIN        PC5

// UART Ports
#define USE_UART1
#define UART1_RX_PIN            PA10
#define UART1_TX_PIN            PA9
//#define UART1_AHB1_PERIPHERALS  RCC_AHB1Periph_DMA2

#define USE_UART3
#define UART3_RX_PIN            PB11
#define UART3_TX_PIN            PB10

#define USE_UART6
#define UART6_RX_PIN            PC7
#define UART6_TX_PIN            PC6

#define SERIAL_PORT_COUNT       4 // VCP, UART1, UART3, UART6


// SPI Ports
#define USE_SPI

#define USE_SPI_DEVICE_1 //Gyro
#define SPI1_NSS_PIN            PA4
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

/*
#define USE_SPI_DEVICE_3 //dataslash - SD Card
#define SPI3_NSS_PIN            PB3
#define SPI3_SCK_PIN            PC10
#define SPI3_MISO_PIN           PC11
#define SPI3_MOSI_PIN           PC12
*/

// OSD
/*
#define OSD
#define USE_MAX7456
#define MAX7456_SPI_INSTANCE    SPI1
#define MAX7456_SPI_CS_PIN      PA14
*/

// ADC inputs
/*
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define USE_ADC
#define VBAT_ADC_PIN            PC1
#define RSSI_ADC_GPIO_PIN       PC0
*/

// Default configuration
#define DEFAULT_RX_FEATURE      FEATURE_RX_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_SBUS
#define SERIALRX_UART           SERIAL_PORT_USART6

// Target IO and timers
#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
//#define TARGET_IO_PORTD         0xffff
#define TARGET_IO_PORTD         (BIT(2))

#define USABLE_TIMER_CHANNEL_COUNT 7
#define USED_TIMERS             (TIM_N(2) | TIM_N(3) | TIM_N(4) | TIM_N(5) | TIM_N(8))
