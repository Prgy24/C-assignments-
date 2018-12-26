/*Develop a C program which adds all numbers from 1 to N, except those which are divisible by 5.
Implement this using for loop and continue statement.*/
#include<stdio.h>
int main()
{
	int sum=0,n,i;
		printf("Enter the number n--");
		scanf("%d",&n);
	for(i=0;i<=n;i++)
		{
			if(i%5!=0)
			{
				sum=sum+i;
			}
	continue;
			if(i%5==0)
			{
				printf("dont include");

			}
		}
				printf("the sum is--%d\n",sum);
return 0;
}
