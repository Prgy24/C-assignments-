/*3. Define a structure declaration for each of the following situations. Assume a 16-bit integer word
a) Define three bit fields, called a, b and c, whose widths are 6-bits, 4-bits and 6-bits,
respectively
b) Declare a structure-type variable v having the composition defined in part (a) above. Assign
initial values 3, 5 and 7 respectively, to the three bit fields. Are the bit fields large enough to
accommodate these values?
c) What are the largest values that can be assigned to each of the bit fields defined in part (a)
above?
d) Define three bit fields, called a, b and c, whose widths are 8 bits, 6 bits and 5 bits,
respectively. How will these fields be stored within the computer’s memory?
e) Define three bit fields, called a, b and c, whose widths are 8 bits, 6 bits and 5-bits respectively.
Separate a and b with 2 vacant bits.*/

#include<stdio.h>
struct bitfields
{
short unsigned int a:6;
short unsigned int d:2;
short unsigned int b:4;
short unsigned int c:6;
};

int main()
{
	struct bitfields i={7,0,5,7};

	if(i.a&111111)
	{
	printf("overflow\n");
	}
	else
	printf("%hu\n",i.a);
return 0;
}
