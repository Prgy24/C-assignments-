/*Write a program to print out all rotations of a string typed in. For eg:if the input is “Space”, the
output should be: space paces acesp cespa espac.*/

#include<stdio.h>
#include<string.h>

int main()
{
 char s[10],temp;
 int i=0,l,k;
    printf("Enter any string:");
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
      {
         temp=s[0];
                for(k=0;k<l;k++)
                  {
                    if(k==(l-1))
                     s[k]=temp;
                    else
                      s[k]=s[k+1];
                   }
             printf("%s\n",s);
	}
return 0;
}
