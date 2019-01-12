/*Develop a program to generate marks sheet of C-DAC, Hyderabad Students (DSSD, DESD and
DAC courses). Modules are different for each course. Implement this using structures, unions,
arrays, loops and variables.*/

#include<stdio.h>
struct srecord{
	char name[25];
	char course[6];
	int rollno;
};

union module{
	char mname[25];
	int i;
};

int main()
{
	struct srecord s1;
	union module mod;
	int i,j,ns,nm,ch,marks;
	printf("Enter no. of students: ");
	scanf("%d",&ns);
	for(i=1;i<=ns;i++)
	{
		printf("Enter student name: ");
		scanf("%s",s1.name);
		printf("Enter course: ");
		scanf("%s",s1.course);
		printf("Roll no.: ");
		scanf("%d",&s1.rollno);
		printf("Enter the no. of modules in course: ");
		scanf("%d",&nm);
		for(j=1;j<=nm;j++)
		{
			
			printf("1.Module name\t2.Module number\n\n");
			printf("Enter your choice: ");
			scanf("%d",&ch);
			if(ch == 1)
			{
			printf("Enter module name: ");
			scanf("%s",mod.mname);
			}
			else if(ch == 2)
			{
			printf("Enter module no.: ");
			scanf("%d",&mod.i);
			}
			else
			printf("Invalid choice\n");
			printf("Enter marks: ");
			scanf("%d",&marks);
		}
	}
return 0;
}
