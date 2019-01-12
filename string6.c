/*Write a C program with a function delete (s1, c). This function deletes each character in s1 which
matches character c.*/

#include<stdio.h>
#include<string.h>

void delete(char s1[15], char c)
{
 int i;
      for(i=0;s1[i]!='\0';i++)
        {
	   if(s1[i]==c)
             i++;
      //printf("%d\n",i);
           //else
         
             printf("%c",s1[i]);
        }
           printf("\n");
}

int main()
{
  char s1[15],c;
      printf("Enter the string--");
      scanf("%s",s1);
      printf("Enter the character you want to delete--");
      scanf(" %c",&c);
      printf("The string is: ");
      delete(s1,c);
return 0;
}
