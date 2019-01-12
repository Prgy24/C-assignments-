/*Write a program to count number of bits as “1” in an 8 bit number.*/

#include<stdio.h>

void itob(int);
int main()
{
int n;
printf("Enter decimal number-");
scanf("%d",&n);

itob(n);
return 0;
}

void itob(int n)
{

 int rem,temp=1,binarynum=0,count=0;
      while(n>0)
	{
     	   rem=n%2;
           if(rem!=0)
             count++;
           n=n/2;
           binarynum=binarynum+(rem*10);
	   temp=temp*10;
        }
	printf("The no. of 1s are : %d\n ",count);
}
