/*Write a function ``replace'' which takes a pointer to a string as a parameter, which replaces all
spaces in that string by minus signs, and delivers the number of spaces it replaced.
Thus
char *cat = "The cat sat";
n = replace( cat );
should set
cat to "The-cat-sat"
and
n to 2.*/

#include<stdio.h>
#include<string.h>
void replace(char *p)
{
int i,count=0,l;
l=strlen(p);
for(i=0;i<l;i++)
{

if(*(p+i)==' ')
	{
	   printf("-");
             count++;
	}
else
	{
		printf("%c",*(p+i));
	}


}
printf("\nn to %d\n:",count);

}
  


void replace(char *);          
int main()
{ 
char *cat="The cat sat";

	replace(cat);
			
return 0;
}





