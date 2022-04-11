 //#include <msp432.h>			// seems unnecessary
 #include <stdint.h>
 #include "lcd16x2_msp43x.h"

 int main(void)
 {
    P4->DIR = 0xFF;     // Set P4 pins as output
    P4->OUT = 0x00;     // Clear all pins

    lcd16x2_Init();                       // Initialize LCD

    lcd16x2_SetPosition( 0, 0 );             // Set position of the cursor (row, column)
    lcd16x2_PrintString("MSP432P401R");   // Print text

    lcd16x2_SetPosition( 1, 0 );
    lcd16x2_PrintString("16x2 LCD");
	 
	  //lcd16x2_Cmd( LCD_CMD_CLEAR_LCD );
	  //lcd16x2_Cmd( LCD_CMD_DISPLAY_OFF_CURSOR_OFF );
	  lcd16x2_Cmd( LCD_CMD_DISPLAY_ON_CURSOR_OFF );
		//lcd16x2_Cmd( LCD_CMD_DISPLAY_ON_CURSOR_BLINK );

     /* The underscore at the end of printed text isn't any kind of error,
        it's just a cursor and it's possible to manipulate its state
        in lcd16x2_msp43x.c or directly from main.c */

     //lcd16x2_Cmd(LCD_CMD_DISPLAY_ON_CURSOR_OFF);     // display ON, cursor OFF/ON/BLINK
                                                     // lines 101-103 in lcd16x2_msp43x.h
 }
