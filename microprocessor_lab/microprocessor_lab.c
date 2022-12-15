#include<avr/io.h>
#include<util/delay.h>
#include "lcd_hd44780_avr.h"
int h=0,i=0,j=0,k=0,a=0,b=0,n=0,c=0;


#define BIT(x) (1<<x)          // for reading input from specific pin of any port
#define CHKB(x,b)  (x&b)       // this is also same

#define s0 CHKB(PINB,BIT(2))   // s0 = value of pin0 of porta  
#define s1 CHKB(PINB,BIT(5))   // s1 = value of pin1 of porta   
#define s2 CHKB(PINB,BIT(7))  
#define s3 CHKB(PIND,BIT(2))
#define s4 CHKB(PINB,BIT(1))
#define s5 CHKB(PINB,BIT(3))
#define s6 CHKB(PINB,BIT(7))
#define s7 CHKB(PIND,BIT(1))
#define s8 CHKB(PIND,BIT(3))

    
	void andcheck()
	{
		DDRB=0b01011011;
		DDRD=0b00111011;
		PORTB=0b10100100;
		PORTD=0b00100100;
		_delay_ms(1000);
		
		if(!s0 && !s1 && !s2 && !s3)
		{
			h=0;
		}
		PORTB=0b10110110;
		PORTD=0b00101101;
		_delay_ms(1000);
		
		if(!s0 && !s1 && !s2 && !s3)
		{
			i=0;
		}
		PORTB=0b10101101;
		PORTD=0b00110110;
		_delay_ms(1000);
		
		if(!s0 && !s1 && !s2 && !s3)
		{
			j=0;
		}
		PORTB=0b10111111;
		PORTD=0b00111111;
		_delay_ms(1000);
		
		if(s0 && s1 && s2 && s3)
		{
			k=1;
		}
		return;
	}
	void orcheck()
	{
		DDRB=0b01011011;
		DDRD=0b00111011;
		PORTB=0b10100100;
		PORTD=0b00100100;
		_delay_ms(1000);
		
		if(!s0 && !s1 && !s2 && !s3)
		{
			h=0;
		}
		PORTB=0b10110110;
		PORTD=0b00101101;
		_delay_ms(1000);
		
		if(s0 && s1 && s2 && s3)
		{
			i=1;
		}
		PORTB=0b10101101;
		PORTD=0b00110110;
		_delay_ms(1000);
		
		if(s0 && s1 && s2 && s3)
		{
			j=1;
		}
		PORTB=0b10111111;
		PORTD=0b00111111;
		_delay_ms(1000);
		
		if(s0 && s1 && s2 && s3)
		{
			k=1;
		}
		return;
		
	}
	void nandcheck()
	{
		DDRB=0b01011011;
		DDRD=0b00111011;
		PORTB=0b10100100;
		PORTD=0b00100100;
		_delay_ms(1000);
		
		if(s0 && s1 && s2 && s3)
		{
			h=1;
		}
		PORTB=0b10110110;
		PORTD=0b00101101;
		_delay_ms(1000);
		
		if(s0 && s1 && s2 && s3)
		{
			i=1;
		}
		PORTB=0b10101101;
		PORTD=0b00110110;
		_delay_ms(1000);
		
		if(s0 && s1 && s2 && s3)
		{
			j=1;
		}
		PORTB=0b10111111;
		PORTD=0b00111111;
		_delay_ms(1000);
		
		if(!s0 && !s1 && !s2 && !s3)
		{
			k=0;
		}
		return;
		
		
	}
	void norcheck()
	{
		DDRB=0b01011011;
		DDRD=0b00111011;
		PORTB=0b10100100;
		PORTD=0b00100100;
		_delay_ms(1000);
		
		if(s0 && s1 && s2 && s3)
		{
			h=1;
		}
		PORTB=0b10110110;
		PORTD=0b00101101;
		_delay_ms(1000);
		
		if(!s0 && !s1 && !s2 && !s3)
		{
			i=0;
		}
		PORTB=0b10101101;
		PORTD=0b00110110;
		_delay_ms(1000);
		
		if(!s0 && !s1 && !s2 && !s3)
		{
			j=0;
		}
		PORTB=0b10111111;
		PORTD=0b00111111;
		_delay_ms(1000);
		
		if(!s0 && !s1 && !s2 && !s3)
		{
			k=0;
		}
		return;
		
	}
	void xorcheck()
	{
		DDRB=0b01011011;
		DDRD=0b00111011;
		PORTB=0b10100100;
		PORTD=0b00100100;
		_delay_ms(1000);
		
		if(!s0 && !s1 && !s2 && !s3)
		{
			h=0;
		}
		PORTB=0b10110110;
		PORTD=0b00101101;
		_delay_ms(1000);
		
		if(s0 && s1 && s2 && s3)
		{
			i=1;
		}
		PORTB=0b10101101;
		PORTD=0b00110110;
		_delay_ms(1000);
		
		if(s0 && s1 && s2 && s3)
		{
			j=1;
		}
		PORTB=0b10111111;
		PORTD=0b00111111;
		_delay_ms(1000);
		
		if(!s0 && !s1 && !s2 && !s3)
		{
			k=0;
		}
		return;
		
	}
	void notcheck()
	{
		DDRB=0b01010101;
		DDRD=0b00110101;
		PORTB=0b10101010;
		PORTD=0b00101010;
		_delay_ms(1000);
		
		if(s1 && s4 && s5 && s6 && s7 && s8)
		{
			h=1;
		}
		return;
				

		PORTB=0b10111111;
		PORTD=0b00111111;
		_delay_ms(1000);
		
		if(!s1 && !s4 && !s5 && !s6 && !s7 && !s8)
		{
			i=0;
		}
		return;
		
	}



int main()
{
		
	LCDInit(LS_NONE);		//initialize lcd
   	LCDWriteStringXY(0,0,"Logic Gate");
	LCDWriteStringXY(10,1,"IC Checker");
	LCDWriteStringXY(3,2,"ID:1302008, 015");
	_delay_ms(3000);
	LCDClear(); 
	LCDWriteStringXY(1,0,"Automatic Mode");
	LCDWriteStringXY(1,1,"Manual Mode");
	LCDWriteStringXY(0,0,">");
	DDRA=0xF0;             // 4 MSB for output(columns) 4 LSB for input(rows);
    PORTA=0x0F;            //enable internal pullups for PB0-PB3
     
   while (1) 
     {
           _delay_ms(100);
          //first column
          PORTA = 0xEF;

          if (!(PINA & 0x04))
          {
             LCDWriteString("7");
			 //Lcd_Chr_CP('7'); (!(PINA & 0x01))
             b = (b*10) + 7;
			 n++;
             while(!(PINA & 0x01));
          }
          else if (!(PINA & 0x02))
          {
             LCDWriteString("4");
			 //Lcd_Chr_CP('4');
             b = (b*10) + 4;n++;
             while(!(PINA & 0x02));
          }
          else if (!(PINA & 0x01))
          {
             LCDWriteString("1");
			 //Lcd_Chr_CP('1'); (!(PINA & 0x04))
             b = (b*10) + 1;n++;
             while(!(PINA & 0x04));
          }
          else if (!(PINA & 0x08))
          {
             //all_zero();
             
			 if(a==0 && c==0)
			 {
			 	LCDClear();
				LCDWriteStringXY(3,2,"Checking IC");
				nandcheck();
				if(h==1 && i==1 && j==1 && k==0)
				{
					LCDClear();
					LCDWriteStringXY(4,0,"IC Matched");
					LCDWriteStringXY(0,1,"IC is 7400");
					LCDWriteStringXY(0,2,"Loading Truth table");
					_delay_ms(3000);
					//LCDWriteStringXY(0,3,"  Yes          No");
					c=1;
					
				}
				
				else
				{
					norcheck();
					if(h==1 && i==0 && j==0 && k==0)
				{
					LCDClear();
					LCDWriteStringXY(4,0,"IC Matched");
					LCDWriteStringXY(0,1,"IC is 7402");
					LCDWriteStringXY(0,2,"Loading Truth table");
					//LCDWriteStringXY(0,3,"  Yes          No");
					_delay_ms(3000);
					c=2;
				}
				else
				{
					notcheck();
					if(h==1 && i==0)
					{
					LCDClear();
					LCDWriteStringXY(4,0,"IC Matched");
					LCDWriteStringXY(0,1,"IC is 7404");
					LCDWriteStringXY(0,2,"Loading Truth table");
					//LCDWriteStringXY(0,3,"  Yes          No");
					_delay_ms(3000);
					c=3;
				}
				else
				{
					andcheck();
					if(h==0 && i==0 && j==0 && k==1)
				{
					LCDClear();
					LCDWriteStringXY(4,0,"IC Matched");
					LCDWriteStringXY(0,1,"IC is 7408");
					LCDWriteStringXY(0,2,"Loading Truth table");
					//LCDWriteStringXY(0,3,"  Yes          No");
					_delay_ms(3000);
					c=4;
				}
				else
				{
					orcheck();
					if(h==0 && i==1 && j==1 && k==1)
				{
					LCDClear();
					LCDWriteStringXY(4,0,"IC Matched");
					LCDWriteStringXY(0,1,"IC is 7432");
					LCDWriteStringXY(0,2,"Loading Truth table");
					//LCDWriteStringXY(0,3,"  Yes          No");
					_delay_ms(3000);
					c=5;
					
				}
				else
				{
					xorcheck();
				if(h==0 && i==1 && j==1 && k==0)
				{
					LCDClear();
					LCDWriteStringXY(4,0,"IC Matched");
					LCDWriteStringXY(0,1,"IC is 7486");
					LCDWriteStringXY(0,2,"Loading Truth table");
					//LCDWriteStringXY(0,3,"  Yes          No");
					_delay_ms(3000);
					c=6;
				}
				else
				{
					LCDWriteStringXY(4,0,"IC didn't Match");
					
				
				}
				}
				}

				}
				}

				}
			 	
			 }
			 if(a==1 && c==0)
			 {
			 	LCDClear();
				LCDWriteStringXY(0,0,"IC No.: ");
				LCDGotoXY(9,0);
				
			 }
			 else 
			 {
			 	if(c==1)
			 {
			 
				LCDClear();
				LCDWriteStringXY(0,0,"  I1 I2 O   I1 I2 O");
				LCDWriteStringXY(3,1,"0");
				LCDWriteStringXY(6,1,"0");
				LCDWriteStringXY(8,1,"1");
				
				LCDWriteStringXY(3,2,"0");
				LCDWriteStringXY(6,2,"1");
				LCDWriteStringXY(8,2,"1");
				
				LCDWriteStringXY(3,3,"1");
				LCDWriteStringXY(6,3,"0");
				LCDWriteStringXY(8,3,"1");
				

				LCDWriteStringXY(13,1,"1");
				LCDWriteStringXY(16,1,"1");
				LCDWriteStringXY(18,1,"0");
				c=0;

			 }
			 else if(c==2)
			 {
			 
				LCDClear();
				LCDWriteStringXY(0,0,"  I1 I2 O   I1 I2 O");
				LCDWriteStringXY(3,1,"0");
				LCDWriteStringXY(6,1,"0");
				LCDWriteStringXY(8,1,"1");
				
				LCDWriteStringXY(3,2,"0");
				LCDWriteStringXY(6,2,"1");
				LCDWriteStringXY(8,2,"0");
				
				LCDWriteStringXY(3,3,"1");
				LCDWriteStringXY(6,3,"0");
				LCDWriteStringXY(8,3,"0");
				

				LCDWriteStringXY(13,1,"1");
				LCDWriteStringXY(16,1,"1");
				LCDWriteStringXY(18,1,"0");
				c=0;

			 }
			 else if(c==3)
			 {
			 
				LCDClear();
				LCDWriteStringXY(0,0,"  I1    O");
				LCDWriteStringXY(3,1,"0");
				LCDWriteStringXY(8,1,"1");
				LCDWriteStringXY(3,2,"1");
				LCDWriteStringXY(8,2,"0")
				c=0;
					
			 }
			 else if(c==4)
			 {
			 
				LCDClear();
				LCDWriteStringXY(0,0,"  I1 I2 O   I1 I2 O");
				LCDWriteStringXY(3,1,"0");
				LCDWriteStringXY(6,1,"0");
				LCDWriteStringXY(8,1,"0");
				
				LCDWriteStringXY(3,2,"0");
				LCDWriteStringXY(6,2,"1");
				LCDWriteStringXY(8,2,"0");
				
				LCDWriteStringXY(3,3,"1");
				LCDWriteStringXY(6,3,"0");
				LCDWriteStringXY(8,3,"0");
				

				LCDWriteStringXY(13,1,"1");
				LCDWriteStringXY(16,1,"1");
				LCDWriteStringXY(18,1,"1");
				c=0;

			 }
			 else if(c==5)
			 {
			 
				LCDClear();
				LCDWriteStringXY(0,0,"  I1 I2 O   I1 I2 O");
				LCDWriteStringXY(3,1,"0");
				LCDWriteStringXY(6,1,"0");
				LCDWriteStringXY(8,1,"0");
				
				LCDWriteStringXY(3,2,"0");
				LCDWriteStringXY(6,2,"1");
				LCDWriteStringXY(8,2,"1");
				
				LCDWriteStringXY(3,3,"1");
				LCDWriteStringXY(6,3,"0");
				LCDWriteStringXY(8,3,"1");
				

				LCDWriteStringXY(13,1,"1");
				LCDWriteStringXY(16,1,"1");
				LCDWriteStringXY(18,1,"1");
				c=0;

			 }
			 else if(c==6)
			 {
			 
				LCDClear();
				LCDWriteStringXY(0,0,"  I1 I2 O   I1 I2 O");
				LCDWriteStringXY(3,1,"0");
				LCDWriteStringXY(6,1,"0");
				LCDWriteStringXY(8,1,"0");
				
				LCDWriteStringXY(3,2,"0");
				LCDWriteStringXY(6,2,"1");
				LCDWriteStringXY(8,2,"1");
				
				LCDWriteStringXY(3,3,"1");
				LCDWriteStringXY(6,3,"0");
				LCDWriteStringXY(8,3,"1");
				

				LCDWriteStringXY(13,1,"1");
				LCDWriteStringXY(16,1,"1");
				LCDWriteStringXY(18,1,"0");
				c=0;

			 }}
			 while(!(PINA & 0x08));
          }

          //second column
          PORTA = 0xDF;
          if (!(PINA & 0x04))
          {
		  //(!(PINA & 0x01))
		  	LCDWriteString("8");
             b = (b*10) + 8;n++;
             while(!(PINA & 0x01));
          }
          if (!(PINA & 0x02))
          {
		  	LCDWriteString("5");
             b = (b*10) + 5;n++;
             while(!(PINA & 0x02));
          }

          if (!(PINA & 0x01))
          {//(!(PINA & 0x04))
		  LCDWriteString("2");
             b = (b*10) + 2;n++;
             while(!(PINA & 0x04));
          }

          if (!(PINA & 0x08))
          {
		  LCDWriteString("0");
             b = (b*10) + 0;n++;
             while(!(PINA & 0x08));
          }

          //third column

          PORTA = 0xBF;
          if (!(PINA & 0x04))
          {
		  //(!(PINA & 0x01))
		  LCDWriteString("9");
             b = (b*10) + 9;n++;
             while(!(PINA & 0x01));
          }
          else if (!(PINA & 0x02))
          {
		  LCDWriteString("6");
             b = (b*10) + 6;n++;
             while(!(PINA & 0x02));
          }
          else if (!(PINA & 0x01))
          {//(!(PINA & 0x04))
		  LCDWriteString("3");
             b = (b*10) + 3;n++;
             while(!(PINA & 0x04));
          }
          else if (!(PINA & 0x08))
          {
				LCDClear();
				LCDWriteStringXY(1,0,"Automatic Mode");
				LCDWriteStringXY(1,1,"Manual Mode");
				LCDWriteStringXY(0,0,">");
				a=0;
	 
            
          }

          //fourth column
          PORTA = 0x7F;
          if (!(PINA & 0x01))
          {		
		  	 if(a==1)
			 {
				 LCDWriteStringXY(0,0,">");
				 LCDWriteStringXY(0,1," ");
				 a=0;
		     }
             
			 
         }
        else if (!(PINA & 0x02))
          {
             
			 if(a==0)
			 {LCDWriteStringXY(0,1,">");
			 LCDWriteStringXY(0,0," ");
			 a=1;}
			 
          }
         else if (!(PINA & 0x04))
          {
             
         }
        else if (!(PINA & 0x08))
          {
             
         }
		if(n>3)
		{
			n=0;
			LCDClear();
			LCDWriteStringXY(3,2,"Checking IC");
			switch(b)
             {
                case 7400: 
				b=0;
					nandcheck(); 
					if(h==1 && i==1 && j==1 && k==0)
					{
						LCDClear();
						LCDWriteStringXY(4,0,"IC:  7400");
						LCDWriteStringXY(0,1,"IC  is good");
						LCDWriteStringXY(0,2,"View Truth table?");
						LCDWriteStringXY(0,3,"  Yes          No");
						c=1;

					}
					else
					{	
						LCDClear();
						LCDWriteStringXY(4,0,"IC:  7400");
						LCDWriteStringXY(0,1,"IC is not good");
					} 
				break;
                case 7402: 
				b=0;
					norcheck(); 
					if(h==1 && i==0 && j==0 && k==0)
					{
						LCDClear();
						LCDWriteStringXY(4,0,"IC:  7402");
						LCDWriteStringXY(0,1,"IC  is good");
						LCDWriteStringXY(0,2,"View Truth table?");
						LCDWriteStringXY(0,3,"  Yes          No");
						c=2;
					}
					else
					{	
						LCDClear();
						LCDWriteStringXY(4,0,"IC:  7402");
						LCDWriteStringXY(0,1,"IC is not good");
						
					} 
				break;
                case 7404: 
				b=0;
					notcheck(); 
					if(h==1 && i==0 )
					{
						LCDClear();
						LCDWriteStringXY(4,0,"IC:  7404");
						LCDWriteStringXY(0,1,"IC  is good");
						LCDWriteStringXY(0,2,"View Truth table?");
						LCDWriteStringXY(0,3,"  Yes          No");
						c=3;
					}
					else
					{	
						LCDClear();
						LCDWriteStringXY(4,0,"IC:  7404");
						LCDWriteStringXY(0,1,"IC is not good");

					} 
				break;
                case 7408: 
					b=0;
					andcheck(); 
					if(h==0 && i==0 && j==0 && k==1)
					{
						LCDClear();
						LCDWriteStringXY(4,0,"IC:  7408");
						LCDWriteStringXY(0,1,"IC  is good");
						LCDWriteStringXY(0,2,"View Truth table?");
						LCDWriteStringXY(0,3,"  Yes          No");
						c=4;
					}
					else
					{	
						LCDClear();
						LCDWriteStringXY(4,0,"IC:  7408");
						LCDWriteStringXY(0,1,"IC is not good");
					}
					break;
                case 7432: 
					 
					b=0;
					orcheck(); 
					if(h==0 && i==1 && j==1 && k==1)
					{
						LCDClear();
						LCDWriteStringXY(4,0,"IC:  7432");
						LCDWriteStringXY(0,1,"IC is good");
						LCDWriteStringXY(0,2,"View Truth table?");
						LCDWriteStringXY(0,3,"  Yes          No");
						c=5;
					}
					else
					{	
						LCDClear();
						LCDWriteStringXY(4,0,"IC:  7432");
						LCDWriteStringXY(0,1,"IC is not good");
					}
					break;break;
                case 7486: 
				b=0;
					xorcheck(); 
					if(h==0 && i==1 && j==1 && k==0)
					{
						LCDClear();
						LCDWriteStringXY(4,0,"IC:  7486");
						LCDWriteStringXY(0,1,"IC  is good");
						LCDWriteStringXY(0,2,"View Truth table?");
						LCDWriteStringXY(0,3,"  Yes          No");
						c=6;
					}
					else
					{	
						LCDClear();
						LCDWriteStringXY(4,0,"IC:  7486");
						LCDWriteStringXY(0,1,"IC is not good");
					} 
				break;
				
             }
		}
	
	
	
	



		
}}
