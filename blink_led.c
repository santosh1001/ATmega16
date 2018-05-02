/* Program to blink LED*/


#include<avr/io.h>  // Header file for IO operations
#include<util/delay.h> //HEader file for using inbuilt delay function

/////////MICRO DEFINITIONS///////////

#define bit(p) (1<<(p))
#define clear_bit(p,b) p&=~b  /// sends 0 to the selected bit
#define set_bit(p,b) p|=b     /// sends 1 to the selected bit 
#define flip_bit(p,b) p^=b    /// toiggles selected bit
#define check_bit(p,b) p&b   //// checks the status of selected bit

/// LEDS are connected in active LOW configiuration
////LED Connections
////LED1 ==  PB0
////LED2 ==  PB1
////LED3 ==  PB2
////LED4 ==  PB3



int main(void)
{
DDRB=0xFF;
PORTB=0x00;


while(1) // Infinite loop to execute program repeatedly
{

PORTB=0xF0;
_delay_ms(1000);
PORTB=0xFF;
_delay_ms(1000);
}   

}