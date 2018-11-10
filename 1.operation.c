#include<stdio.h>
int main()
{
int a,b,sum=0,sub=0,mul=0;
float div=0;
int mod=0;
printf("enter two nos.-");
scanf("%d %d",&a,&b);
sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;
mod=a%b;
printf("the sum is- %d\n",sum);
printf("the sub is %d\n",sub);
printf("the mul is %d\n",mul);
printf("the div is %f\n",div);
printf("the mod is %d\n",mod);
return 0;
}

