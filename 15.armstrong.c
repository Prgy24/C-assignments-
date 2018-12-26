/*Write a Program to find if a given number is Armstrong number.*/
#include<stdio.h>


int main()
{
	int m,r,res=0,num;

	printf("Enter the number-");
	scanf("%d",&num);
	m=num;
	while(m!=0)
	{
		r=m%10;
		res=(r*r*r)+res;
		m=m/10;

	}
	if(res==num)
	{
	printf("THE NUMBER IS AN ARMSTRONG NUMBER\n");
	}
	else
	{
	printf("THE NUMBER IS NOT AN ARMSTRONG NUMBER\n");
	}
return 0;
}
