/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_ARDUINO_STM32_
#define _VARIANT_ARDUINO_STM32_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/

#define PC13	0
#define PC14	1
#define PC15	2
#define PA0		3
#define PA1		4
#define PA2		5
#define PA3		6
#define PA4		7
#define PA5		8
#define PA6		9
#define PA7		10
#define PB0		11
#define PB1		12
#define PB2		13
#define PB10	14
#define PB12	15
#define PB13	16
#define PB14	17
#define PB15	18
#define PA8		19
#define PA9		20
#define PA10	21
#define PA11	22
#define PA12	23
#define PA15	24
#define PB3		25
#define PB4		26
#define PB5		27
#define PB6		28
#define PB7		29
#define PB8		30
#define PB9		31



// This must be a literal
#define NUM_DIGITAL_PINS        42
// This must be a literal with a value less than or equal to to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS       10
#define NUM_ANALOG_FIRST        32

// On-board LED pin number
#define LED_BUILTIN             PC13
#define LED_BLUE              	LED_BUILTIN

// On-board user button
//#define USER_BTN                PC13

// Timer Definitions
// Do not use timer used by PWM pins when possible. See PinMap_PWM.
#define TIMER_TONE              TIM10

// Do not use basic timer: OC is required
#define TIMER_SERVO             TIM2  //TODO: advanced-control timers don't work

// UART Definitions
#define SERIAL_UART_INSTANCE    1 
// Default pin used for 'Serial' instance
// Mandatory for Firmata
#define PIN_SERIAL_RX           PA10
#define PIN_SERIAL_TX           PA9

#define HSE_VALUE              25000000U /*!< Value of the External oscillator in Hz */

#define PIN_SPI_MOSI                PA7
#define PIN_SPI_MISO                PA6
#define PIN_SPI_SCK                 PA5

#define PIN_WIRE_SDA                PB7
#define PIN_WIRE_SCL                PB6

#ifdef __cplusplus
} // extern "C"
#endif
/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
// These serial port names are intended to allow libraries and architecture-neutral
// sketches to automatically default to the correct port name for a particular type
// of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
// the first hardware serial port whose RX/TX pins are not dedicated to another use.
//
// SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
//
// SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
//
// SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
//
// SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
//                            pins are NOT connected to anything by default.
#define SERIAL_PORT_MONITOR     Serial
#define SERIAL_PORT_HARDWARE    Serial
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */
