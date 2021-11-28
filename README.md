# TI_MSP432

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND (see LICENSE)

## Hardware
- MSP432P401R      ( Mouser No: 595-MSP-EXP432P401R  )
- HD44780 16x2 LCD ( Mouser No: 992-LCD-16X2B        )
- 2x 10kOhms Potentiometers, breadboard, wires.

## Software
- ARM Keil uVision5 (5.36)
- [LCD16x02_MSP43x library](https://github.com/agaelema/LCD16x2_MSP43x) by [agaelema](https://github.com/agaelema) (zip copy is on /docs)


## Setup
1. New project -> Select Device for Target 'Target 1' -> MSP432P401R
2. Manage Run-Time Environment -> CMSIS: CORE (v5.5.0) and Device: Startup (v3.2.2)
3. Options for Target 'Target 1' -> Target -> Code Generation -> ARM Compiler -> Use default compuler version 5
4. Options for Target 'Target 1' -> Debug -> CMSIS-DAP Debugger -> Settings -> Debug -> CMSIS-DAP - JTAG/SW Adapter -> Max Clock -> 1MHz
5. Options for Target 'Target 1' -> Debug -> CMSIS-DAP Debugger -> Settings -> Flash Download -> add "Reset and Run"


If adding original LCD library by @agaelema, adopt the "lcd16x2_msp43x.h" to specific board:

	/***************************************************************************************
	*          LCD PINS DEFINITION - will define PORT and PINS used by LCD
	***************************************************************************************/
	#define     _EN_PORT        4                   // default EN port - P1
	#define     _EN_PIN         2                   // default EN pin  - P1.6
	#define     _RS_PORT        4                   // default RS port - P1
	#define     _RS_PIN         0                   // default RS pin  - P1.7

	#define     _LCD_4BIT_PORT          4               // port used to data
	#define     _LCD_DATA_BASE          4               // first low pin of 4 bit interface
	#define     _LCD_4BIT_HIGH          0x0F            // 4 bits in high mode

6. Get stuff connected

![Wiring scheme](/images/WIRING.BMP)

LCD module pin names:

Pin number | Pin name  | Pin description
--- | --- | ---
1 | GND/VSS | ground pin for LCD
2 | VDD/VCC | supply voltage pin for LCD
3 | V0/VEE | contrast adjust
4 | RS | Register Select (0;1)
5 | RW | Read/Write (0;1)
6 | E | enable
7-14 | Data Bits | send commands or data to the LCD
15 | A/LED+ | supply voltage pin for backlight
16 | K/LED- | ground ping for backlight


Potentiometer types:

![Slide POT (potentiometer) wiring](/images/SLIDE_POTENTIOMETER.BMP)

![Single turn POT wiring](/images/SINGLE_TURN_POT.BMP)


7. Build (F7)
8. Download (F8)

___

## DEMONSTRATION:

CONTRAST_DEMO

![CONTRAST_DEMO](/images/CONTRAST_DEMO.gif)


BRIGHTNESS_DEMO

![BRIGHTNESS_DEMO](/images/BRIGHTNESS_DEMO.gif)
