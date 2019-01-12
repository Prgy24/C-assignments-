/*Write a C program that will accept a hexadecimal number as input, and then display a menu
that will permit any of the following operations to be carried out
a) Display the hexadecimal equivalent of the one’s complement
b) Carry out a masking operation and then display the hexadecimal equivalent of the result
c) Carry out a bit shifting operation and then display the hexadecimal equivalent of the result
d) Exit
If the masking operation is selected, prompt the user for the type of operation (bitwise and,
bitwise exclusive or, or bitwise or) and then a (hexadecimal) value for the mask. If the bit
shifting operation is selected, prompt the user for the type of shift (left to right), and then the
number of bits.*/

#include<stdio.h>

int main()
{

	unsigned int num,b;
	int ch;

	do
	{
		printf("1.One's compliment\t2.Masking operations\t3.Bit shifting operation\t0.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);

		switch(ch)
		{
		case 1:printf("Enter the hexadecimal number: ");
			scanf(" 0x%x", &num);
			num = ~num;
			printf("Hexadecimal equivalent of one's compliment is 0x%x\n", num);
			break;

		case 2:printf("Enter the hexadecimal number: ");
			scanf(" 0x%x", &num);
			num = ((~num) & 0x0000ffff);
			printf("After masking hexadecimal number is 0x%x\n",num);
			break;

		case 3:printf("Enter the hexadecimal number and left shifting bits: ");
			scanf(" 0x%x%d", &num,&b);
			num = num << b;
			printf("Hexadecimal number after %d bit left shifting is 0x%x\n",b,num);
			break;

		case 0:break;
		default:printf("Wrong choice\n");
		}
	}while(ch!=0);
return 0;
}


