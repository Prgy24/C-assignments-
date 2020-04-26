#include<stdio.h>
#include<conio.h>
void main()
{
int h=0,m=0,s=0;
double i;
printf("Enter the time in HH:MM:SS ");
scanf("%d %d %d", &h,&m,&s);
start:
for(h;h<24;h++){
	 for(m;m<60;m++){
	      for(s;s<60;s++){
		 clrscr();
		 printf("\n\n\n\n\n\t\t\t%d : %d : %d\n" ,h,m,s);

		       for(i=0;i<4000000;i++){  //the statement wont effect the value of i
			  i++;
			  i--;
						     }
			      }

		  s=0;	}
	     m=0;  }
	 h=0;
 goto start;
getch();
}
