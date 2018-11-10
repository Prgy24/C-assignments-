/*to 	perform operations on complex numbers */

#include<stdio.h>

int main()
{

int a,b,c,d,x,y;
printf("enter two complex numbers-");
scanf("%d%d%d%d",&a,&b,&c,&d);
printf("the complex sum is %d+%di\n",(a+c),(b+d));
printf("the complex sub is %d+%di\n",(a-c),(b-d));
x=(a*c)+(b*d*(-1));
y=(a*d)+(b*c);
printf("the complex multiplication is %d+%di\n",x,y); 

return 0;
} 






 
