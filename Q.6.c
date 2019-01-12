/*Write a menu driven C program to perform operations on Complex numbers. Use enumeration
data type to identify the different operations on Complex numbers.*/

#include<stdio.h>
enum operation{add=1,sub,multiply};
struct complex
{
	int real;
	int img;
};

int main()
{
	enum operation ch;
	struct complex a,b,c;
	c.real=0;
	c.img=0;
	printf("Enter two complex no.: ");
	scanf("%d+%di%d+%di",&a.real,&a.img,&b.real,&b.img);

	printf("1.Addition\t2.Subtraction\t3.Multiplication\n");
	printf("Enter your choice: ");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:c.real=a.real+b.real;
			c.img=a.img+b.img;
			printf("\n%d+%di",c.real,c.img);
			break;

		case 2:c.real=a.real-b.real;
			c.img=a.img-b.img;
			printf("\n%d+%di",c.real,c.img);
			break;
	
		case 3:c.real=a.real*b.real-a.img*b.img;
			c.img=a.real*b.img+a.img*b.real;
			printf("\n%d+%di",c.real,c.img);
			break;
		default:printf("Invalid choice\n");
	}
return 0;
}

