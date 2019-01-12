/*Write a C program with a function invertponwards (n, p, b). This function inverts b bits of
integer n, that begin at position p, leaving the others unchanged.*/

#include<stdio.h>

int invert_p_onwards(int, int, int);

int main()
{
  int n,p,b,binary;
	
	printf("Enter the decimal number n : ");
        scanf("%d",&n);
	//printf(The binary of n is--)

	printf("Enter the position from where you want to invert p: ");
	scanf("%d",&p);

	printf("Enter the no. of bits you want to invert b: ");
	scanf("%d",&b);

	binary=invert_p_onwards(n,p,b);
	printf("The inverted no. is--%d\n",binary);

return 0;
}

int invert_p_onwards(int n, int p, int b)
{
 int num;
     
       
   
      num=((1<<b)-1)^((1<<(p-1))-1);
      
      return (n^num);
}
      
