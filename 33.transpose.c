/*Write a function to get the transpose of a matrix.*/

#include<stdio.h>

void transpose_matrix(int [][10],int,int);

int main()
{
  int a[10][10],r,c,i,j;
	  printf("Enter rows and columns for the matrix--");
	  scanf("%d%d",&r,&c);
	  printf("Enter the elements for the matrix--");
   for(i=0;i<r;i++)
      
        for(j=0;j<c;j++)
	scanf("%d",&a[i][j]); 
       
        printf("\n");

   for(i=0;i<r;i++)
       {
	   for(j=0;j<c;j++)           
	    printf("%d\t",a[i][j]);
	   
		printf("\n");
       }
   transpose_matrix(a,r,c);
return 0;
}

void transpose_matrix(int a[10][10],int r,int c)

{
   int trans[10][10],i,j;
  
      for(i=0;i<r;i++)
	 for(j=0;j<c;j++)
		{
		  trans[j][i]=a[i][j];
		}
                  printf("The transpose of matrix is--\n");
      for(i=0;i<c;i++)
        {
           for(j=0;j<r;j++)
                {
                    printf("%d\t",trans[i][j]);
		}
   			printf("\n");
         }
}

