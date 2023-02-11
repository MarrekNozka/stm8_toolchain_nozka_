#include "stm8s.h"
#include "delay.h"
#include "LCD_I2C.h"
// #include <stdio.h>
// #include "uart1.h"

void setup(void)
{
    CLK_HSIPrescalerConfig(CLK_PRESCALER_HSIDIV1); // taktovani MCU na 16MHz
    delay.init();                                  // Inicializace delay (TIM4)
    LCD_I2C_Init(0x27, 16, 2);                     // Inicializace LCD
}

void loop(void)
{
    LCD_I2C_Print("Test\n");
}

int main(void)
{
    setup();
    while (1)
    {
        loop();
    }
}
/*-------------------------------  Assert -----------------------------------*/
#include "__assert__.h"
