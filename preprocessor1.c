/*Write a C program to calculate factorial of a number. Factorial function has to be written as a
multiline macro.*/
#include<stdio.h>
#define FACT   for(i=1;i<=n;i++) {y=y*i;}
int n ,i,y=1;
int main()
{
 printf("factorial of which number do yu want?");
 scanf("%d",&n);
FACT;
printf("%d\n",y);
return 0;
}	
		
