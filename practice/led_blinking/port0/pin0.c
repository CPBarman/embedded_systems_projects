//Using Port 0, Pin 0 to turn ON and OFF repeatedly
#include<reg51.h>
sbit LED=P0^0;
void main()
{
    while(1)

    {
        LED=0;
        LED=1;
    }  
}
