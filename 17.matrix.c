/*Write a menu based C program to perform operations (+, - and *) on matrices.*/




#include<stdio.h>
int main()
{
int i,j,m1[2][2],m2[2][2],c=0,k;
printf("enter the values of matrix 1-");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&m1[i][j]);
printf(" %d\t",m1[i][j]);
}
printf("\n");
}

printf("enter the values of matrix 2-");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&m2[i][j]);
printf(" %d\t",m2[i][j]);
}
printf("\n");

}
printf("-----------------------------\n");
printf("ADDITION MATRIX IS -\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{

printf("%d\t",m2[i][j]+m1[i][j]);
}
printf("\n");
}

printf("------------------------------\n");


printf("SUBTRACTION MATRIX IS -\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{

printf("%d\t",m1[i][j]-m2[i][j]);
}
printf("\n");
}

printf("------------------------------\n");

printf("MULTIPLICATION MATRIX IS -\n");

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


 


