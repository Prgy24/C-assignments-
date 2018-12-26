/*Write a C program to generate two Relatively Prime numbers*/
#include<stdio.h>
int main()
{
int a,b,temp;
      printf("Enter two integer no. such that a>b:-");
      scanf("%d%d", &a,&b);
        while(temp!=0)
        {
temp=a%b;
a=b;
b=temp;
}
if(a==1)
printf("Given no.s are relatively prime\n");
else
printf("Given no.s are not relatively prime\n");
return 0;
}
