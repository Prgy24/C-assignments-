/*Write a program to read n number of strings and display them on the screen. Use array of
pointers and dynamic memory allocation techniques.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int n,i;
	printf("Enter no of strings--");
	scanf("%d",&n);
	char *s[n];
	printf("Enter the strings.\n");
        for(i=0;i<n;i++)
	  
	    s[i]=malloc(sizeof(char)*15);
	for(i=0;i<n;i++)
	    {
               scanf("%s",*(s+i));
               printf("%s ",*(s+i));
            }
             printf("\n");
return 0;
}
