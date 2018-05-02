/* Program to USE the buzzer*/

#include<avr/io.h>  // Header file for IO operations
#include<util/delay.h> //HEader file for using inbuilt delay function

/////////MICRO DEFINITIONS///////////

#define bit(p) (1<<(p))
#define clear_bit(p,b) p&=~b  /// sends 0 to the selected bit
#define set_bit(p,b) p|=b     /// sends 1 to the selected bit 
#define flip_bit(p,b) p^=b    /// toiggles selected bit
#define check_bit(p,b) p&b   //// checks the status of selected bit

/// functions to generate the morse code

void dot(void)
{
set_bit(PORTA,bit(7));
_delay_ms(100);
clear_bit(PORTA,bit(7));
_delay_ms(100);
}

void dash(void)
{
set_bit(PORTA,bit(7));
_delay_ms(300);
clear_bit(PORTA,bit(7));
_delay_ms(90);
}
	
////Buzzer is connected in active HIGH configuration////


//// Buzzer PIN PA7//////


	int main(void)
	{
	
	set_bit(DDRA,bit(7));  // Initialise buzzer as output pin
    	clear_bit(PORTA,bit(7)); //Turn off buzzer

			while(1)  // Infinite loop to execute program repeatedly
			{
		        	dot();dot();dot();dash();dash();dot();dot();dot();_delay_ms(1000);_delay_ms(500);
			}
			return 0;
		
	}
