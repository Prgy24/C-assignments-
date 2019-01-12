/* Write a program to add first seven terms of the following series:
1 / 1! + 2 / 2! –3 /3! + 4 / 4! . . .*/

#include<stdio.h>

int fact(int);

 int main()
{
  int n,i,a;
  float sum1=0,sum2=0,b,c,num=1;
      printf("Enter the no of terms--");
      scanf("%d",&n);
     
      for(i=2;i<=n;i++)
{
         num=i;
                   if(i%2==0)
                {
                    b=(num/fact(i));
		   sum1=sum1+b;
		}		   
                 else
			{
			   c=(num/fact(i));
                        sum2=sum2-c ;
			}
}


		    printf("The sum is--%.2f\n",1+sum1+sum2);
      return 0;
}
int fact(int a)

{
    if(a<2)
    return 1;
    else
    return (a*fact(a-1));
}
