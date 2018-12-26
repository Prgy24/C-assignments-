/*Develop a C program to find sum of all odd numbers upto N using while loop*/
#include<stdio.h>
int main()
{
	int n,i=1,sum=0;

		printf("Enter the number n is--");
		scanf("%d",&n);
	while(i<=n)
		{
			if(i%2!=0)
				{
					sum=sum+i;
				}
			i++;
		}

		printf("the sum of odd no. is-%d\n",sum);

return 0;
}

