/*Write a C program to find the maximum of 2 numbers using Conditional operator.*/

#include<stdio.h>

int main()
{
int a,b,z;
printf("Enter no.s ");
scanf("%d %d",&a, &b);
z=(a>b)?a:b;
printf("the greater no. is z= %d /n",z);
return 0;
}
