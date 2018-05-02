#define F_CPU 80000000UL

#include<avr/io.h>
#include<util/delay.h>
#define bit(p) (1<<(p))
#define clear_bit(p,b) p&=~b  /// sends 0 to the selected bit
#define set_bit(p,b) p|=b     /// sends 1 to the selected bit 
#define flip_bit(p,b) p^=b    /// toiggles selected bit
#define check_bit(p,b) p&b   //// checks the status of selected bit

void dot(void)
{
set_bit(PORTA,bit(7));
_delay_ms(100);
clear_bit(PORTA,bit(7));
}


int main(void)
{
DDRB=0xFF;
PORTB=0xFF;
DDRD=0xFF;
PORTD=0x00;


// Infinite loop to execute program repeatedly
{

PORTB=0xFE;  
_delay_ms(100);
PORTB=0xFF;   
	set_bit(DDRA,bit(7));  // Initialise buzzer as output pin
    	clear_bit(PORTA,bit(7)); //Turn off buzzer

		  // Infinite loop to execute program repeatedly
			{
		        	dot();
			}
PORTB=0xFD;  
_delay_ms(400);
PORTB=0xFF;   
	set_bit(DDRA,bit(7));  // Initialise buzzer as output pin
    	clear_bit(PORTA,bit(7)); //Turn off buzzer

		  // Infinite loop to execute program repeatedly
			{
		        	dot();
			}
PORTB=0xFB; 
	{
				PORTD=0xA0;
				_delay_ms(500);
				PORTD=0x50;
				_delay_ms(500);
				PORTD=0x00;
			} 
PORTB=0xFF;  
 
	set_bit(DDRA,bit(7));  // Initialise buzzer as output pin
    	clear_bit(PORTA,bit(7)); //Turn off buzzer

		  // Infinite loop to execute program repeatedly
			{
		        	dot();
			}


PORTB=0xFB;  
_delay_ms(500);
PORTB=0xFF;   
	set_bit(DDRA,bit(7));  // Initialise buzzer as output pin
    	clear_bit(PORTA,bit(7)); //Turn off buzzer

		  // Infinite loop to execute program repeatedly
			{
		        	dot();_delay_ms(10);dot();
			}
PORTB=0xFD;  
_delay_ms(400);
PORTB=0xFF;   
	set_bit(DDRA,bit(7));  // Initialise buzzer as output pin
    	clear_bit(PORTA,bit(7)); //Turn off buzzer

		  // Infinite loop to execute program repeatedly
			{
		        	dot();
			}
			
PORTB=0xFB; 
	{
				PORTD=0xA0;
				_delay_ms(500);
				PORTD=0x50;
				_delay_ms(500);
				PORTD=0x00;
			} 
PORTB=0xFF;  
 
	set_bit(DDRA,bit(7));  // Initialise buzzer as output pin
    	clear_bit(PORTA,bit(7)); //Turn off buzzer

		  // Infinite loop to execute program repeatedly
			{
		        	dot();
			}


PORTB=0xFB;  
_delay_ms(500);
PORTB=0xFF;   
	set_bit(DDRA,bit(7));  // Initialise buzzer as output pin
    	clear_bit(PORTA,bit(7)); //Turn off buzzer

		  // Infinite loop to execute program repeatedly
			{
		        	dot();_delay_ms(10);dot();
			}
			
			
PORTB=0xF7;  
{
				PORTD=0xA0;
				_delay_ms(500);
				PORTD=0x50;
				_delay_ms(500);
				PORTD=0x00;
			} 
PORTB=0xFF;   
	set_bit(DDRA,bit(7));  // Initialise buzzer as output pin
    	clear_bit(PORTA,bit(7)); //Turn off buzzer

		  // Infinite loop to execute program repeatedly
			{
		        		dot();_delay_ms(10);dot();_delay_ms(10);dot();
			}			

}   

}
