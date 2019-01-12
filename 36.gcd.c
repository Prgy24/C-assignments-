/*Write a program to compute factorial and GCD using recursion.*/


#include<stdio.h>

int fact(int );
int gcd(int , int );

int main()
{
	int res,num,a,b;
		printf("Enter the number--");
		scanf("%d",&num);
		res=fact(num);
		printf("The factorial of given no. is %d\n",res);
		printf("Enter two no. for gcd--");
		scanf("%d %d", &a,&b);
		printf("The greatest common factor of %d and %d is--%d\n",a,b,gcd(a,b));
return 0;
}
int fact(int num)
	{
	  if(num<2)
	  return 1;
	  else
	  return num*fact(num-1);
	  }

int gcd(int a,int b)
	{
	  if(b==0)
	  return a;
	  else
	  return gcd(b , a%b);
		
	}

