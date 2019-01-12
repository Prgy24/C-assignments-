/*Develop sample programs using preprocessor operators #, ## and also conditional compilation*/

#include<stdio.h>
#define PRINT(x) printf(#x " value is %d\n",x);
#define PASTE(a,b) a##b
#define MUL(x,y) printf("Multiplication of 12 and 2 is %d\n ",(x)*(y));

int main()
{
 int k4=10,k3=5;

 int x=12;
 PRINT(x)
int y=12;
int k=90;
PRINT(y)

#ifdef PRINT(x)
MUL(12,2) 
#endif
printf("%d %d\n" ,PASTE(k,4),PASTE(k,3));
return 0;
}


