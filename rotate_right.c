/*Write a C program with a function rotate_right (x, n). This function rotates integer n
towards right by b positions.*/

#include<stdio.h>
int rotate_right(int ,int );
int main()

{
 int b,n,result;
	
  printf("enter the integer number : ");
  scanf("%d",&n);
  printf("how many position you wanna rotate to right?");
  scanf("%d",&b);
  result=rotate_right(n,b);
  printf("The rotated number after %d right position is %d\n",b,result);
return 0;
}

  int rotate_right(int n, int p)
  {
 

       int i,a=0,count=0,x=1;
		for(i=n;i!=0;i/=10)
                         count++;
                for(i=1;i<count;i++)
                        x=x*10;
                for(i=1;i<=p;i++)
                  {
                    a=n%10;
		    n=n/10;
		    n=(a*x)+n;
                  }
return n;
}

  
