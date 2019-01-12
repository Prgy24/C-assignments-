/*Write a function expand (s1, s2) which expands shorthand notations of s1 like a-d into abcd and
0-9 to 0123456789 in s2. For example if the string in s1 is 0123a-e1-4 then s1 is expanded in s2 to 0123abcde1234*/

#include<stdio.h>
#include<string.h>
void expand(char s1[20],char [40]);
int main()
{
	char s1[20],s2[40];
              printf("Enter the string s1:\n");
              scanf("%s",s1);
       	      strcpy(s2,s1);
	      expand(s1,s2);
return 0;
}

void expand(char s1[20],char s2[40])
{

	int i,l,k;
           l=strlen(s2);
	   printf("New string is:\n");
           for(i=0;i<l;i++)
		{
			if(s2[i]=='-')
			{
			for(k=s2[i-1];k<s2[i+1]-1;k++)
			{
				s2[i-1]=s2[i-1]+1;
				printf("%c",s2[i-1]);
			}
			}
		else
			printf("%c",s2[i]);
                }
		printf("\n");
}
