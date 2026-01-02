// Active High LED 

#include<lpc21xx.h>

void delay(int ms)
{
	int i;
	for(;ms>0;ms--)
		for(i=12000;i>0;i--);
}

int main()
{
IODIR0=1<<17;
	while(1)
	{
		IOSET0=1<<17;
		delay(500);
		IOCLR0=1<<17;
		delay(500);
	}
}
