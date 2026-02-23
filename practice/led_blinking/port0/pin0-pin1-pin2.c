//Using Port 0 Pins 0 1 and 2 to turn ON and OFF repeatedly
#include<reg51.h>
sbit LED0=P0^0;
sbit LED1=P0^1;
sbit LED2=P0^2;
void main()
{
    while(1)
    {
        LED0=0;
        LED0=1;

        LED1=0;
        LED1=1;

        LED2=0;
        LED2=1;
    }
}
