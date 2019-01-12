/*Write a C program that will illustrate the equivalence between
◦
Shifting a binary number to the left n bits and multiplying the binary number by 2n
◦ Shifting a binary number to the right n bits and dividing the binary number by 2n.
Choose the initial binary number carefully, so that bits will not be lost as a result of the shifting
operation.*/

#include<stdio.h>

int leftshift(int n, int b);
int rightshift(int n,int b);
int itob(int);

int main()
{
	int n,b,ans=0,leftres=0,rightres=0;

	printf("Enter the number n and bits b : ");
	scanf("%d%d", &n,&b);

	leftres=leftshift(n,b);

return 0;
}

int leftshift(int n,int b)
{

	int ans=0,num=0,a=0;
	num=itob(n);
	a=itob(2*n);
	ans=num<<b;
	ans=(ans)*(a);
	printf("Shifting a binary by bit %d \n",a);

return ans;
}

int itob(int num)
{
	if(num==0)

		return 0;
	else
		return (num%2 + 10*itob(num/2));
}

