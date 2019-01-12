/*Write a program that reads a number that says how many integer numbers are to be stored in
an array, creates an array to fit the exact size of the data and then reads in that many numbers
into the array.*/

#include<stdio.h>
int main()
{
	int n,i;
	printf("How many numbers you want to be stored in the array?:");
	scanf("%d",&n);
	int ar[n];
	for (i=0;i<n;i++)
	{
	scanf("%d",&ar[i]);
	}
	printf("The number is :-");

	for(i=0;i<n;i++)
	{
	printf("%d",ar[i]);
	}
return 0;
}



