/*Write a C program with a recursive function itoa, which converts integer into a string.*/


#include<stdio.h>
#include<string.h>
void itoa(int, char[]);
int main()
{
  int num,result,n;
  char str[100];
         printf("Enter the integer no.--");
         scanf("%d",&num);
       
         itoa(num,str);
	  printf("Converted string is--%s\n",str);
return 0;
}

void itoa(int num, char str[])
{
   int i,rem,len=0,n;
      n=num;
             while(n!=0)
		{
		    len++;
		    n=n/10;
		}
         for(i=0;i<len;i++)
       		{
		    rem=num%10;
		    num=num/10;
		    str[len-(i+1)]=rem+'0';
		}
		    str[len]='\0';
}

