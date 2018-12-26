/*Write a program to find whether given number is palindrome or not.*/
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
		res=res*10+r;
		m=m/10;

	}

if (res==num)
{
printf("THE NUMBER IS A PALLINDROME \n");
}
else 
{
printf("THE NUMBER IS NOT A PALLINDROME\n");
}
return 0;
}



