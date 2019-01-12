/*Implement string library functions. strrev, strcpy, strcat, strcmp with same return values and all
error handling features using pointers.*/

#include<stdio.h>
#include<string.h>

void copy_string(char *,char *);
void concatenate_string(char *,char *);
void reverse_string(char *,char *);

int main()
{
   char s1[20],s2[20],c[20],r[20];
   int i;
   printf("Enter string 1: ");
   scanf("%s",s1);
   printf("Enter string 2: ");
   scanf("%s",s2);
   copy_string(s1,c);
   printf("Copied string is: %s\n",c);
   reverse_string(s1,r);
   printf("Reversed string is: %s\n",r);
   concatenate_string(s1,s2);
   printf("Concatenated string is: %s\n",s1);
return 0;
}

void copy_string(char *s1,char *c)
{
 int i,j=0;
    for(i=0;*(s1+i)!='\0';i++)
      { 
        c[j]=s1[i];
        j++;
      }
}

void reverse_string(char *s1,char *r)
{ 
  int i,count=0,j=0;
    for(i=0;*(s1+i)!=0;i++)
      {
        count++;
      }
         for(i=(count-1);i>=0;i--)
       {
          r[j]=s1[i];
          j++;
       }
}

void concatenate_string(char *s1,char *s2)
{
  int i=0,j,count=0;
    while(*(s1+i)!='\0')
       {
         i++;
       }
   
   for(j=0;*(s2+j)!='\0';j++)
       {
        *(s1+i)=*(s2+j);
         i++;
       }
}

