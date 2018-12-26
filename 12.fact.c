/* Develop a C program to find factorial of a number N using for loop.*/
#include<stdio.h>
int main()
{
	int i,n,fact=1;

	printf("enter the number n--");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
		{
			fact=fact*i;
		}
		printf("The factorial is-- %d\n",fact);

return 0;
}
