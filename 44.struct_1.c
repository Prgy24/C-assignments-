/*Write a program to represent time of the day in hrs, mins and secs. Use structures.*/

#include<stdio.h>

struct time
{
	int hrs;
	int mins;
	int secs;
};

int main()
{
	struct time t;
	printf("Enter time in hr:min:sec format--");
	scanf("%d:%d:%d",&t.hrs,&t.mins,&t.secs);
	printf("hours:%d\nminutes:%d\nseconds:%d\n",t.hrs,t.mins,t.secs);
return 0;
}
