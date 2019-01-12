/*Write a C program with a function deletes2 (s1, s2). This function deletes each character in
string s1 which matches any character in string s2.*/

#include<stdio.h>
#include<string.h>

void delete(char s1[15],char s2[15])
{
 int i,j;
       for(i=0;s1[i]!='\0';i++)
         {
	    for(j=0;s2[j]!='\0';j++)
		{
		  if(s1[i]==s2[j])
                      i++;
                }
            printf("%c",s1[i]);
         }
         printf("\n");
}

int main()
{
  char s1[15],s2[15];
       printf("Enter 1st string--\n");
       scanf("%s",s1);
       printf("Enter 2nd string--\n");
       scanf("%s",s2);
       printf("1st string is:\n");
delete(s1,s2);
return 0;
}
