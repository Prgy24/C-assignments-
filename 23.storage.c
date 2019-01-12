/*Develop multi file program to understand static, auto, register, global, static global variables.What
is the scope and lifetime of each of these types of variables.*/
#include<stdio.h>
 int x=9;
int  z=10;
int main()
{
	auto int a=32;
	register char b='g';
	extern int z,x;
	printf("Hello World\n");
	printf("This is the value of auto variable - %d\n",a);
	printf("The value of external variables 'x' and 'z ' are :%d %d\n ",x,z);
	printf("Value in the register is %d\n",b);
	x=2;
	z=5;
	printf("The modified value of 'x' and 'z' is : %d %d \n",x,z);
	while(x>0)
	{
		static int y=5;
		y++;
		printf("The value of y is %d \n",y);
		x--;
	}
	return 0;
}


