/*Read two integers, representing a rate of pay (pence per hour) and a number of hours. Print out
the total pay, with hours up to 40 being paid at basic rate, from 40 to 60 at rate-and-a-half,
above 60 at double-rate. Print the pay as rupees to two decimal places.
Terminate the loop when a zero rate is encountered.
At the end of the loop, printout the total pay.
The code for computing the pay from the rate and hours is to be written as a function.
The recommended output format is something like:
Pay at 200 pence/hr for 38 hours is 76.00 rupees
Pay at 220 pence/hr for 48 hours is 114.40 rupees
Pay at 240 pence/hr for 68 hours is 206.40 rupees
Pay at 260 pence/hr for 48 hours is 135.20 rupees
Pay at 280 pence/hr for 68 hours is 240.80 rupees
Pay at 300 pence/hr for 48 hours is 156.00 rupees
Total pay is 928.80 rupees*/

#include<stdio.h>
int main()
{
int hr, rate;
float a,b,c;

printf("Enter the the no. of hours--");
	         scanf("%d",&hr);
	         printf("Enter the rate of pay--");
	         scanf("%d",&rate);
                

            if(rate!=0)
{

	      
	        if((hr<=40)&&(rate=rate))
		{
                    
		    a=(hr*rate)/100;
                    printf("Pay at %d pence/hour for %d is %.2f rupees\n",rate,hr,a);
		    
                }

		    printf("Enter the the no. of hours--");
	            scanf("%d",&hr);
	            printf("Enter the rate of pay in pence/hour--");
	            scanf("%d",&rate);

                     
                if((hr>=40)&&(hr<=60)&&(rate=(rate*3)/2))
		{
                 
		 b=(hr*rate)/100;
                 printf("Pay at %d pence/hour for %d is %.2f rupees\n",rate,hr,b);
		 
                }
                 
                 printf("Enter the the no. of hours--");
	         scanf("%d",&hr);
	         printf("Enter the pay in pence/hour--");
	         scanf("%d",&rate);             

                if((hr>60)&&(rate=rate*2))
		{
                 
                 c=(hr*rate)/100;
                 printf("Pay at %d pence/hour for %d is %.2f rupees\n",rate,hr,c);
		 
                }


printf("Total pay is %.2f rupees\n",a+b+c);

}
              else 
                 { 
                   exit(0);
                 }
return 0;
}	

