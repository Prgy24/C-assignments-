/*Write a function to swap contents of two variables using functions and pointer variables.*/

#include<stdio.h>

void swap(int *, int *);

int main()
{
   int a,b;
     printf("Enter two values a and b which you want to swap--");
     scanf("%d%d",&a,&b);
     swap(&a,&b);
     printf("a is %d,b is %d\n",a,b);
return 0;
}

void swap(int *p,int *q)
{
    int temp;
     temp=*p;
      *p=*q;
      *q=temp;
}
