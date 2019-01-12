/*Write a program to reverse a string using recursive functions*/

#include<stdio.h>
#include<string.h>

void reverse(char *);

int main()
{
 char s[25];
      printf("Enter the string--");
      scanf("%[^\n]s",s);
      reverse(s);
      printf("\n");
}

void reverse(char *s)
{
   if(*s!='\0')
    reverse(s+1);
     printf("%c",*s);
     
}
