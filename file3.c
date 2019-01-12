#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch1,ch2,found;
	found = 'n';	
	FILE *fp1;
	FILE *fp2;
	
	

char fname[20]="text1.txt";
char f2name[20]="text2.txt";
char str[50];

fp1=fopen(fname,"w");
if(fp1==NULL)
{

printf("error in opening the file");
exit( 0);
}

printf("enter the contents of the files:");
scanf("%[^\n]",str);
fprintf(fp1,"%s\n",str);

fclose(fp1);
fp1=fopen(fname,"r");
fp2=fopen(f2name,"w");
if(fp2==NULL)
{

printf("error in opening the file");
exit( 0);
}
	else
	{
		ch1=fgetc(fp1);
		ch2=fgetc(fp1);
	while(ch2 != EOF )
	{
		
		if((ch1=='/' && ch2=='*')) 
		{
			found = 'y';						
		
		}
		if(ch1 == '/' && ch2 == '/')
		{
						
			while(ch2 != '\n')
			{
				
				ch2 = fgetc(fp1);
			}			
			ch1 = ch2;
			
		}
		
		if(found == 'n')
		{
			fputc(ch1,fp2);
		}
		if(ch1 == '*' && ch2 == '/')
		{
			found = 'n';
			ch2 = fgetc(fp1);
		}
		ch1 = ch2;
		ch2 = fgetc(fp1);
	}
	}
fclose(fp1);
fclose(fp2);
return 0;
}
