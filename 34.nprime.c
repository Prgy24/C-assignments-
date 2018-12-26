/*Write a program to print all the prime numbers in the first N numbers*/

#include<stdio.h>
int main()
{
int n1,n2,i,j,count=0,temp=0;
printf("enter the range of numbers:");
scanf("%d%d",&n1,&n2);
if(n2<2)
{
printf("there are no prime numbers upto %d\n",n2);
}
for(i=2;i<=n2;i++)
{
   count=0;
   for(j=2;j<=i;j++)
   {
    if(i%j==0)
    count++;
    }
if(count==1)
{
temp++;
printf("%d\t",i);
}
}
printf("the total prime no. in the range are--%d\n",temp);
return 0;
}
