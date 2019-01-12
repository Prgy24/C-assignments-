/*A C program contains the following declaration
int x[8]= {10,20,30,40,50,60,70,80};
What is the meaning of x?
What is the meaning of (x+2)?
What is the value of *x?
What is the value of (*x+2)?
What is the value of *(x+2)?*/

#include<stdio.h>
int main()
	{
 		int x[8]={10,20,30,40,50,60,70,80};

                printf("x= %p\n\n  (x+2)= %p\n\n *x= %d\n\n (*x+2)= %d\n\n *(x+2)= %d\n",x,(x+2),*x,(*x+2),*(x+2));
		return 0;
     	}

