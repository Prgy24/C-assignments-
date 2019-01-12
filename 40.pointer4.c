/*
Write a program to count the number of ‘e’ in the following array of pointer to
char * s [ ] = {
“we will teach you how to “ ,
“Move a mountain “ ,
.“Level a building “ ,
“Erase the past “,
“Make a million “ }.*/

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,l,count=0;

	char *s[]={"We will teach you how to","Move a mountain" ,"Level a building" ,"Erase the past","Make a million" };
	printf("count the number of 'e' in the following array of pointers:\n ");
	for(i=0;i<5;i++)
		{
			printf(" %s\n",s[i]);
		}
	for(i=0;i<5;i++)
	{
		l=strlen(*(s+i));
		for(j=0;j<l;j++)
		{
			if(*(*(s+i)+j)=='e')
			{
				count++;
			}
		}
	}

	printf("the number of 'e' in the program are %d: \n",count);
	return(0);
}
