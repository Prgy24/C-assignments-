/* Write a program to remove all the comments from a ‘C’ program.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{

FILE  *fp1,*fp2;

char fname[20]="text1.txt";
char f2name[20]="text2.txt";
char str[50];
char ch;

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


 
while((ch=fgetc(fp1))!=EOF)
{

fputc(ch,fp2);
}







fclose(fp2);
fclose(fp1);
return 0;
}


   
