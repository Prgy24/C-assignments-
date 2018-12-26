/*Write a program to print ASCII values of upper case and lower case alphabets and digits (A-Z, a-z and 0-9)*/

#include<stdio.h>

int main()
{
	char ch;

		for(ch='A';ch<='Z';ch++)
			{
				printf("%c-%d\t",ch,ch);
			}
		for(ch='a';ch<='z';ch++)
			{
				printf("%c-%d\t",ch,ch);
			}
		for(ch='0';ch<='9';ch++)
			{
				printf("%c-%d\t",ch,ch);
			}
		printf("\n");
return 0;
}
