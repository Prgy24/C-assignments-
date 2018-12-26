/*WRITE A PROGRAM TO WRITE A MENU BASED C  PROGRAM  TO PERFORTM (+,-,*) OPERATION OF MATRICES*/

#include<stdio.h>


int main()
{
int n,i,j,m1[2][2],m2[2][2],c=0,k;
printf("OPERATIONS ON MATRICES\n\n");
printf("Enter the values of matrix 1-   ");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&m1[i][j]);
printf(" %d\t",m1[i][j]);
}
printf("\n");
}
printf("Enter the values of matrix 2-   ");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&m2[i][j]);
printf(" %d\t",m2[i][j]);
}
printf("\n");
}
printf("\n");
printf("1.ADDITION\n\n");
printf("2.SUBTRACTION\n\n");
printf("3.MULTIPLICATION\n\n");
printf("CHOOSE ANY PROGRAM--");
scanf("%d",&n);
switch(n)
{
case 1:
       printf("ADDITION OF MATRICES\n");
       printf("----------------------\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",m2[i][j]+m1[i][j]);
}
printf("\n");
}

case 2:
       printf("SUBTRACTION OF MATRICES\n");
       printf("----------------------\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{

printf("%d\t",m1[i][j]-m2[i][j]);
}
printf("\n");
}
case 3:
 
       printf("MULTIPLICATION OF MATRICES\n");
       printf("----------------------\n");

for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
c=0;
for(k=0;k<2;k++)
{
c=c+(m1[i][k]*m2[k][j]);

}
printf("%d\t",c);
}
printf("\n");
}



}
return 0;
}








