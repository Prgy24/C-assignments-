/*Write a program to find the sum of digits of a given number.*/
#include<stdio.h>
int main()
{
int n,a,sum=0,i;
printf("Enter the number:");
scanf("%d",&n);
for(i=3;i>=0;i--)
{
a=n%10;
n=n/10;
sum=sum+a;
}
printf("THE SUM IS %d\n",sum);
return 0;
}





