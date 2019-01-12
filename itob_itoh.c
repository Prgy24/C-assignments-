/*Write a C program with two functions itob (n, s) and itoh (n, s). itob converts integer into binary
character representation in s. Similarly itoh converts integer into hexadecimal character
representation in s.*/

#include<stdio.h>
void itob(int, char []);
void itoh(int, char []);
int main()
{
 int n;
char s[100];
char hexa[100];


   printf("Enter decimal integer number--");
   scanf("%d",&n);
   printf("The Binary conversion is: ");
itob(n,s);
   printf("The hexadecimal conversion is: ");
itoh(n,hexa);
return 0;
}

void itob(int n, char s[100])
{

 int i=0,binarynum=0,rem,temp=1,count=0;

          while(n>0)
		{
  	 	   rem=n%2;
		   if(rem!=0)
                    {
                   s[i]=rem;
                   i++;
		    }
		   else
		     {
		    s[i]=rem;
			i++;
		     }
                    n=n/2;
		   binarynum=binarynum+(rem*temp);
                   temp=temp*10;
                  count++;
		   
		}
 			//printf("%d",count);

            for(i=count-1;i>=0;i--)
                  {
                     printf("%c",s[i]+'0');
		  }
             printf("\n");
}
void itoh(int n, char hexa[100])
{
  int i=0,rem,count=0;
   		while(n!=0)
		{
                  rem=n%16;
			if(rem<10)
			   {
				hexa[i]=48+rem;
				i++;
			   }
			else
			   {
				hexa[i]=55+rem;
				i++;
			   }
			n=n/16;
                        count++;
                }
            for(i=count-1;i>=0;i--)
                printf("%c",hexa[i]);
		printf("\n");
}
			
