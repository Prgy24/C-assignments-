/*Write a program to convert lower case string to upper case string and vice versa.*/

#include<stdio.h>
#include<string.h>

int main()
{

char s[20];
int i,count=0;
     printf("Enter the string-");
     scanf("%s",s);
     for(i=0;s[i]!='\0';i++)
     {
           if((s[i]>='a')&&(s[i]<='z'))
           s[i]=(int)s[i]-32;
           else
           s[i]=(int)s[i]+32;
           count++;
      }
       for(i=0;i<=count;i++)
        printf("%c",s[i]);
        printf("\n");
return 0;
}
