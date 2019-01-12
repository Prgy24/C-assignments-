/*Write a menu driven application that performs the functions of a calculator. The inputs from the
user should be validated and error messages in case, inputs are not valid, should be displayed of
multiplication, division, factorials (use recursion) and squares. Modularize the code wherever
possible.*/

#include<stdio.h>
int mul(int,int);
int div(int,int);
int sq(int);
int fact(int);

int main()
{
	int choice,n1,n2,result;
	printf("1.Multiplication\t2.Division\t3.Factorial\t4.square\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:printf("Enter two no.: ");
			scanf("%d%d",&n1,&n2);
			result=mul(n1,n2);
			printf("Multiplication is %d\n",result);
			break;

		case 2:printf("Enter two no.: ");
			scanf("%d %d",&n1,&n2);
			result=div(n1,n2);
			printf("Division is %d\n",result);
			break;

		case 3:printf("Enter no.: ");
			scanf("%d",&n1);
			result=fact(n1);
			printf("factorial is %d\n",result);
			break;

		case 4:printf("Enter no.: ");
			scanf("%d",&n1);
			result=sq(n1);
			printf("Square is %d\n",result);
			break;

		default:printf("Enter valid choice \n");
		}
return 0;
}

int mul(int n1, int n2)
{
	int result=0;
	if(n2!=0)
		result = result+(mul(n1,n2--));
	else
		return n1;
return result;
}

int div(int n1, int n2)
{
	if(n1<n2)
	return 0;
	else
	return div(n1-n2,n2)+1;
}

int sq(int n1)
{
	int result;
	result=n1*n1;
return result;
}

int fact(int n1)
{
	if(n1<2)
		return 1;
	else
		return n1*fact(n1-1);
}
	
