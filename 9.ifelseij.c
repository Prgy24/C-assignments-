/*Develop a c program having logic. If i is 20 or j is 20, display as "Atleast one variable is having 20" otherwise display "Bothe variables are not having 20". If i is less than or equal to 40 and j is less than or equal to 40, It should display "Both are less than or equal to 40" otherwise It should display as "Both are not less than or equal to 40".Implement this using if-else statement as well as with condition operator.*/

#include<stdio.h>
int main ()
{
int i,j,y;
printf("Enter the values of i and j--");
scanf("%d%d",&i,&j);
if((i==20)||(j==20))
{
printf("Atleast one variable is having 20.\n");
}
else
{
printf("Both variables are not having 20.\n");
}
/*if((i<=40)&&(j<=40))
{
printf("Both are less than or equal to 40.\n");
}
else
{
printf("Both are not less than or equal to 40.\n");
}*/
y=(((i<=40)&&(j<=40))?printf("both are less than or equal to 40\n"):printf("both are not less than or equal to 40\n"));
return 0;
}
