#include <stdint.h>


#define       RCC_base_add         0x40021000  // clock 
#define       APB2_offset          0x18  //
#define       PORTC_base_add       0x40011000
#define       GPIOC_CRH_offset     0x04
#define       GPIOC_ODR_offset     0x0C

void delay1(volatile uint16_t time){
	volatile uint16_t x, y;
	for(x=0; x<time; x++)
	for(y=0; y<235; y++);
}

int main(void)
{
	volatile uint32_t *clock_reg    =   (uint32_t*) (RCC_base_add + APB2_offset);
	volatile uint32_t *mode_reg     =   (uint32_t*) (PORTC_base_add + GPIOC_CRH_offset);
	volatile uint32_t *output_reg   =   (uint32_t*) (PORTC_base_add + GPIOC_ODR_offset);


	*clock_reg |=  1 << 4;         // Enable the clock of PORTC peripheral in APB2 bus
	*mode_reg  &=  ~(15 << 20);    // Clear the four Configure & Mode bits of 13th bit
	*mode_reg  |=  1 << 21;        // Sets as General purpose output push-pull (2MHz)

    while(1){
    	*output_reg |= 1 << 13;     // Make PORTC 13 bit as high
    	delay1(1000);               // delay
    	*output_reg &= ~(1 << 13);  // Make PORTC 13 bit as low
    	delay1(1000);               // delay
    }
}