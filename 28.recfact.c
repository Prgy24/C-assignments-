/*Write a recursive function to find factorial of a number.*/
#include<stdio.h>

int fact(int num)
    {
if(num<1)
return 1;
else
return num*fact(num-1);
}
int main()
{
int fact(int num);
int res,num;
printf("Enter the number--");
scanf("%d",&num);
res=fact(num);
printf("The factorial of given no. is %d\n",res);
return 0;
}
