/*Write a function expand (s, t) which converts characters like newline and tab into visible escape
sequences like \n and \t as it copies the string s to t. Use switch statement and also display both
s and t at the end.*/

#include<stdio.h>
#include<string.h>

void expand(char s[25],char t[25])

{
 int i;
 for(i=0;t[i]!='\0';i++)
  {
    if(t[i]==(char)9)
      printf("\\t");
    else if(t[i]==(char)10)
      printf("\\n");
    else
      printf("%c",t[i]);
   }
     printf("\n");

}

int main()
{
 char s[25],t[25];
 printf("Enter the string-");
 scanf("%[^.c]s",s);
 expand(s,strcpy(t,s));
 return 0;
}
