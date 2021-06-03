# MSP432P401R

## Hardware:
- MSP432P401R      ( Mouser No: 595-MSP-EXP432P401R  )
- HD44780 16x2 LCD ( Mouser No: 992-LCD-16X2B        )
- 2x Potentiometer ( Mouser No: 652-PTA20432015CPB10 )


## Instructions:
1. **Setup/Verify**
	-. Connect MSP432 via USB
	-. Create "New CCS Project" in Code Composer Studio
		- select Target: MSP432 Family  |  MSP432P401R
		- click "Verify" to make sure the Lanuchpad works
		- name the project
		- leave the rest of settings untouched
2. **Add LCD lib:**
	- Add both .c and .h files of the [LCD16x02_MSP43x library](https://github.com/agaelema/LCD16x2_MSP43x) by [agaelema](https://github.com/agaelema) via "Project Explorer" window into the project's main directory
	- Edit the .h lib file so it fits MSP432 PIN layout instead of MSP430
		- Line 22: #include <msp432.h>
		- Line 28: #define     _EN_PORT        4                   // default EN port - P4
		- Line 29: #define     _EN_PIN         2                   // default EN pin  - P4.2
		- Line 30: #define     _RS_PORT        4                   // default RS port - P4
		- Line 31: #define     _RS_PIN         0                   // default RS pin  - P4.0
		- Line 33: #define     _LCD_4BIT_PORT          4               // port used to data
		- Line 34: #define     _LCD_DATA_BASE          4               // first low pin of 4 bit interface

3. **Copy main.c file**

4. **Connect the hardware:**
	
### !!! WARNING !!! Disconnect the Launchpad from PC first !!!

![Wiring scheme](/images/WIRING.BMP)

LCD PIN Description:
 Pin number | Pin name  | Pin description
--- | --- | ---
1 | GND/VSS | ground pin for LCD
2 | VDD/VCC | supply voltage pin for LCD
3 | V0/VEE | contrast adjust
4 | RS | Register Select (0;1)
5 | RW | Read/Write (0;1)
6 | E | enable
7-14 | Data Bits | send commands or data to the LCD
15 | A | supply voltage pin for backlight
16 | K | ground ping for backlight

![Slide potentiometer wiring](/images/SLIDE_POTENTIOMETER.BMP)


5. **Build (Project->Build Project) and load (Run->Load->project_name)**



___

Info: in case the link is broken or you cannot find it for some other reason, the whole master repo zip is included "as is" in "/lib".