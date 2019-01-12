/*Write a program to search for a given element in a list of elements using Linear Search. Use flag
to represent the status of search. Define flag as an enumeration variable whose value is either
true or false.*/

#include<stdio.h>
enum flag{false,true};
int main()
{
	enum flag f1;
	int n,i,s,count=0;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter element to be searched: ");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(s==arr[i])
		{
			f1=true;
			printf("%d\n",f1);
			count++;
			break;
		}
	}
		if(count==0)
		{
			f1=false;
			printf("%d\n",f1);
		}
return 0;
}
