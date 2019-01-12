/*Write a program to read your name into a character array. Print the name along with the length
of your name and sizeof the array in which name is stored.*/
#include<stdio.h>
int main()
{
int i=0,count=0,n;
char a[n];
printf("Enter the value of n--");
scanf("%d",&n);
printf("Enter your name--");
for(i=0;i<n;i++)
{
scanf("%c",&a[i]);

}
for(i=0;i<n;i++)
{
printf("%c",a[i]);
}
i=0;
while((i<n)&&(a[i]!='\0'))
{
if(a[i]==' ')
{

printf("%c",' ');
i++;
continue;
}

printf("%c",a[i]);
count++;
i++;
}


printf("THE LENGTH OF MY NAME IS %d\n",count);

printf("SIZE OF THE ARRAY IS %d\n",sizeof(a));
return 0;
}

