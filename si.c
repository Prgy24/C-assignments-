/* WAP TO CALCULATE THE SIMPLE INTEREST WITH THE PRECISION OF TWO DECIMAL NUMBERS*/

#include<stdio.h>

int main()
{

float p,r,SI;int t;
printf("The PRINCIPAL AMOUNT IS :\n");
scanf("%f",&p);
printf("The TIME IS :\n");
scanf("%d",&t);
printf("THE RATE OF INTEREST IS :\n");
scanf("%f",&r);
SI=(p*t*r)/100;

printf("THE SIMPLE INTEREST IS :%.2f\n",SI);
return 0;
}







