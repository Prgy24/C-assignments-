/*Develop a C program to add two operands and store the result in one of the operand using
addition assignment operator.*/

#include<stdio.h>
int main()
{
int a,b;
printf("Enter two nos.-");
scanf("%d %d",&a,&b);
a+=b;
printf("the sum is-%d \n",a);
return 0;
}
