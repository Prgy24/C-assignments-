/*Write a program to read n number of strings using two-dimensional character array, sort them
and display the sorted list of strings on the screen.*/

#include<stdio.h>
#include<string.h>

int main()
{
 int  i,j,n;

 printf("Enter the no. of strings you want to enter--");
 scanf("%d",&n);

 char name[n][10],tname[n][10],temp[10];
 printf("Enter strings\n");
	 for(i=0;i<n;i++)
	   { 
	     scanf("%s",name[i]);
	     strcpy(tname[i],name[i]);
	   }
  		for(i=0;i<n;i++)
 		  {
			for(j=i+1;j<n;j++)
			   {
         			if(strcmp(name[i],name[j])>0)
				  {
					strcpy(temp,name[i]);
					strcpy(name[i],name[j]);
					strcpy(name[j],temp);
				  } 
 			   }
		   }
printf("\n");
printf("Input name      Sorted name\n");
printf("\n");
               for(i=0;i<n;i++)
		{
		    printf("%s\t\t%s\n",tname[i],name[i]);
		}
                 printf("\n");
return 0;
}
