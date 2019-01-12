/*Write a program to calculate n!/(n-r)! using functions.*/
#include<stdio.h>

int fact(int);

int main()
{
int p,n,r;
printf("enter the number :");
scanf("%d",&n);
printf("enter the value of r: ");
scanf("%d",&r);

p=fact(n)/fact(n-r);

printf("the permutation is : %d\n:",p);
}

int fact(int n)
{
 int fact=1;
while(n>1)
{
fact =fact*n;
n--;
}
 return fact;
}



