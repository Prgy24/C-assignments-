/*Develop a C program which accepts character type data item from user. In case if user typed
‘A’ or ‘a’, it should display A for Apple
‘B’ or ‘b’, it should display B for Bat
‘D’ or ‘d’, it should display D for Dog
‘F’ or ‘f’, it should display F for Fan
Instead of the above 4 characters, if user types any other character, it should display “Character
is not in the range”. Implement this using if-else statement and switch statement.*/

#include<stdio.h>
int main()
{
char alphabet,A,a,B,b,D,d,F,f;
printf("Enter the alphabet--");
scanf("%c",&alphabet);
if((alphabet=='A')||(alphabet=='a'))
{
printf("A for Apple \n");
}
else if((alphabet=='B')||(alphabet=='b'))
{
printf("B for Bat \n");
}
else if((alphabet=='D')||(alphabet=='d'))
{
printf("D for Dog \n");
}
else if((alphabet=='F')||(alphabet=='f'))
{
printf("F for Fan \n");
}
else
{
printf("The character is not in the range \n");
}
return 0;
}
