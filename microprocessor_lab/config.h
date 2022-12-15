/*
 * config.h
 *
 * Created: 15/06/2014 12:44:43 PM
 *  Author: Avinash
 */ 


#ifndef CONFIG_H_
#define CONFIG_H_


/************************************************
	LCD CONNECTIONS
*************************************************/

#define LCD_DATA C		//Port AVR's PB0-PB3 are connected to LCD's DB4-DB7
#define LCD_DATA_POS 3

#define LCD_E C			//Enable/strobe signal (E)-> PB4
#define LCD_E_POS	PC2	//Position of enable in above port

#define LCD_RS C		//Register Select signal (RS)-> PD3
#define LCD_RS_POS	PC0

#define LCD_RW C		//Read/Write signal (R/W) ->PD6
#define LCD_RW_POS	PC1


/***********************************************

LCD Type Selection
Uncomment Just one of them

************************************************/

//#define LCD_TYPE_202	//For 20 Chars by 2 lines

#define LCD_TYPE_204	//For 20 Chars by 4 lines

//#define LCD_TYPE_162	//For 16 Chars by 2 lines

//#define LCD_TYPE_164	//For 16 Chars by 4 lines


//************************************************

#endif /* CONFIG_H_ */
