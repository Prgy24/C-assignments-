/*Develop a C program which accepts character type data item from user. In case if user typed          
‘A’ or ‘a’ , it should display A for Apple        
‘B’ or ‘b’ , it should display B for Bat        
‘D’ or ‘d’ , it should display D for Dog        
‘F’ or ‘f’ , it should display F for Fan Instead of the above 4 characters, if user types any other character, it should display “Character is not in the range”. Implement this using switch statement. 
  */

#include<stdio.h>

int main()
{
	char ch=0;
	printf("enter the alphabet:");
	scanf("%c",&ch);
	
	if((ch=='A')||(ch=='a'))
	ch='A';

	if((ch=='B')||(ch=='b'))
	ch='B';

	if((ch=='D')||(ch=='d'))
	ch='D';

	if((ch=='F')||(ch=='f'))
	ch='F';


	switch(ch)
	{
	case 'A':printf("A FOR APPLE\n");
		break;
	case 'B':printf("B FOR BAT \n");
		break;
	case 'D':printf("D FOR DOG \n");
		break;
	case 'F':printf("F FOR FAN \n");
		break;
	default:printf("character is not in the range\n");
		break;
	}
	return 0;
}
