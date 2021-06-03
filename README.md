# MSP432P401R

Hardware:

- MSP432P401R      ( Mouser No: 595-MSP-EXP432P401R  )
- HD44780 16x2 LCD ( Mouser No: 992-LCD-16X2B        )
- Potentiometer    ( Mouser No: 652-PTA20432015CPB10 )


Instructions:
1. Verify
	1. Connect MSP432 via USB
	2. Create "New CCS Project" in Code Composer Studio
		- select Target: MSP432 Family  |  MSP432P401R
		- click "Verify" to mak sure the Lanuchpad works
		- name the project
		- leave the rest of settings untouched
	3. Add both .c and .h files of the [LCD16x02_MSP43x library](https://github.com/agaelema/LCD16x2_MSP43x) by [agaelema](https://github.com/agaelema) via "Project Explorer" window into the project's main directory. 
	*NOTE: In case the link is broken and you cannot find it for some reason, the whole master repo zip is included "as is" in "/lib".*

2. Connect the hardware:
![Wiring scheme](/images/WIRING.BMP)

3. 




