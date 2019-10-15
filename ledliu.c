#include <reg52.h>

void main()

{
	unsigned int i=0;
	unsigned char cnt=0;

	while(1)
	{
		P1=~(0x01<<cnt);
		for(i=0;i<20000;i++);
		cnt++;
		if(cnt>=8)
		{
			cnt=0;
		}
		
	}
}