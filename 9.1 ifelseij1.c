/*using condition operator( if-else)*/

#include<stdio.h>

int main()
{
int i ,j ,z,y;
printf("the values of i and j are--");
scanf("%d%d",&i,&j);
z=(((i==20)||(j==20))?printf("atleast one variable is having 20\n"):printf("both variables are not having 20\n"));
y=(((i<=40)&&(j<=40))?printf("both are less than or equal to 40\n"):printf("both are not less than or equal to 40\n"));
return 0;
}

