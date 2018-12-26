/*Write a program to search for an element in a given list of elements. Use break statement*/
#include<stdio.h>
int main()
{

int a[5]={1,8,9,6,4},i,n;
        printf("ENTER THE ELEMENT TO BE FOUND:");
        scanf("%d",&n);
    for (i=0;i<5;i++)
         {
                  if(a[i]==n)
		{
                   printf("THE VALUE IS FOUND AT INDEX %d\n",i);break;
		}
			
         }

    
         
                 if(i==5)
                  {
                      printf("THE VALUE IS NOT FOUND\n");
            
		      }
	
         
return 0;
}

