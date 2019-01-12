/*Write a program in which define a as an unsigned integer whose value is (hexadecimal) 0xa2c3.
Write the corresponding bit pattern for this value. Then evaluate each of the following bitwise
expressions, first showing the resulting bit pattern and then the equivalent hexadecimal value.
Utilize the original value of a in each expression. Assume that a is stored in a 16-bit word
a) ~a
b) a ^ 0x3f06
c) a | 0x3f06
d) a | ~0x3f06
e) a >> 3
f) a << 5
g) a ^ ~a
h) a | ~a
i) (a & ~0x3f06) << 8
j) a & ~ (0x3f06 >> 8*/

#include<stdio.h>
int main()
{
	unsigned int a=0xa2c3, b=0x0000;
	b= ((~a) & 0x0000ffff);

	printf("Value of the unsigned integer a= 0x%x\n",a);
	printf("1. Value of the unsigned integer ~a=0x%x\n ",b);
	printf("2. Value of the unsigned integer a ^ 0x3f06 = 0x%x\n",a ^ 0x3f06);
	printf("3. Value of the unsigned integer a | 0x3f06 = 0x%x\n",a | 0x3f06);
	printf("4. Value of the unsigned integer a | ~0x3f06 = 0x%x\n",a | ~0x3f06);
	printf("5. Value of the unsigned integer a >> 3 = 0x%x\n",a >> 3);
	printf("6. Value of the unsigned integer a << 5 = 0x%x\n",a << 5);
	printf("7. Value of the unsigned integer a ^ ~a = 0x%x\n",a ^ b);
	printf("8. Value of the unsigned integer a | ~a = 0x%x\n",a | b);
	printf("9. Value of the unsigned integer (a & ~0x3f06) << 8 = 0x%x\n",(a & ~0x3f06) << 8);
	printf("10. Value of the unsigned integer (a & ~0x3f06) >> 8 = 0x%x\n",(a & ~0x3f06) >> 8);

return 0;
}
	
