#include "ws2812.h"

void ws2812WriteLow(void)
{
    HAL_GPIO_WritePin(RGB_GPIO_Port,RGB_Pin,1);
    __NOP();
    HAL_GPIO_WritePin(RGB_GPIO_Port,RGB_Pin,0);
    __NOP();__NOP();
}

void ws2812WriteHigh(void)
{
    HAL_GPIO_WritePin(RGB_GPIO_Port,RGB_Pin,1);
    __NOP();__NOP();
    HAL_GPIO_WritePin(RGB_GPIO_Port,RGB_Pin,0);
	__NOP();
}

void ws2812Reset(void)
{
    HAL_GPIO_WritePin(RGB_GPIO_Port,RGB_Pin,0);
    uint16_t i = 25000;
    while (i--)
    {
        __NOP();
    }
    
}

void ws2812WriteByte(uint8_t byte)
{
    uint8_t i = 0;
    for(;i<8;++i)
    {
        if(byte&0x80)
            ws2812WriteHigh();
        else
            ws2812WriteLow();
        byte<<=1;
    }
}

void ws2812ShowColor(uint8_t green,uint8_t red,uint8_t blue)
{
    ws2812WriteByte(green);
    ws2812WriteByte(red);
    ws2812WriteByte(blue);
}