/*Develop a program to calculate nPr and nCr given n and r.*/
#include<stdio.h>

int fact(int);

int main()

{
	 int n,r,p,c;
	 printf("Enter two no.s--");
	 scanf("%d %d",&n,&r);
	 p=fact(n)/fact(n-r);
	 c=p/fact(r);
	 printf("The total permutations are p(n,r)= %d\n",p);
	 printf("The total combinations are c(n,r)= %d\n",c);
return 0;
}

int fact(int n)

{
	if(n<2)
        return 1;
	else
	return n*fact(n-1);
}
