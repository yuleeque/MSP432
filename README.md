# MSP432P401R

Hardware:

- MSP432P401R      ( Mouser No: 595-MSP-EXP432P401R  )
- HD44780 16x2 LCD ( Mouser No: 992-LCD-16X2B        )
- 2x Potentiometer (1 is optional) ( Mouser No: 652-PTA20432015CPB10 )


### Instructions:
1. Setup/Verify
2. Add LCD lib
3. main.c
4. Witing
5. Build and load


1. **Setup/Verify**
	1. Connect MSP432 via USB
	2. Create "New CCS Project" in Code Composer Studio
		- select Target: MSP432 Family  |  MSP432P401R
		- click "Verify" to make sure the Lanuchpad works
		- name the project
		- leave the rest of settings untouched
2. **Add LCD lib:**
	1. Add both .c and .h files of the [LCD16x02_MSP43x library](https://github.com/agaelema/LCD16x2_MSP43x) by [agaelema](https://github.com/agaelema) via "Project Explorer" window into the project's main directory
	2. Edit the .h lib file so it fits MSP432 PIN layout instead of MSP430
		- Line 22: #include <msp432.h>
		- Line 28: #define     _EN_PORT        4                   // default EN port - P4
		- Line 29: #define     _EN_PIN         2                   // default EN pin  - P4.2
		- Line 30: #define     _RS_PORT        4                   // default RS port - P4
		- Line 31: #define     _RS_PIN         0                   // default RS pin  - P4.0
		- Line 33: #define     _LCD_4BIT_PORT          4               // port used to data
		- Line 34: #define     _LCD_DATA_BASE          4               // first low pin of 4 bit interface

3. **Copy main.c file**


4. **Connect the hardware:**

![Wiring scheme](/images/WIRING.BMP)


5. **Build successfully (Project->Build Project) and load (Run->Load->project_name)**





Info: in case the link is broken or you cannot find it for some other reason, the whole master repo zip is included "as is" in "/lib".