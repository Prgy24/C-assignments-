/*Use scanf function to read a string of characters (into character type array called text) including
alphabets, digits, blanks, tabs etc except new line character. Write a loop that will examine each
character in a character-type array and determine how many of the characters are letters, how
many are digits, how many are blanks and how many are tabs. Assume that text contains 80
characters*/
#include<stdio.h>
int main()
{
int i,l=0,d=0,b=0,t=0,n,o=0;
char arr[80];
printf("enter the value of n upto which you want to fill such that n<=80: ");
scanf("%d",&n);
printf("enter the values you want in the form of letters ,digits,blanks  tab or special characters: ");
for (i=0;i<=n;i++)
{
                  
                   scanf("%c",&arr[i]);
}



for (i=0;i<=n;i++)
{
                          if((arr[i]>='A' && arr[i]<='Z')||(arr[i]>='a' && arr[i]<='z'))
                            {
                                  l++;
                            }
                          else if (arr[i]>='0' && arr[i]<='9')
                            { 
                                   d++;
                            }
                           else if (arr[i]==' ')
                             {
                                    b++;
                             }
                            else if(arr[i]=='\t')
                             {
                                    t++;
                             }
			    else if(arr[i]>=32 && arr[i]<=47)
     			    {
		                    o++;
			    }
			   else if(arr[i]>58 && arr[i]<=64)
			   {
 				o++;
			   }
   

} 
printf("The number of alphabets are %d\n",l);
printf("The number of digits are %d\n",d);
printf("The number of blanks are %d\n",b);
printf("The number of tabs are %d \n",t);
printf("the number of special characters are %d\n",o);

return 0;
}





