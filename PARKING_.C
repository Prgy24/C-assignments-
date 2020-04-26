#include<stdio.h>
#include<conio.h>

//initialising global variables
int nor,nob,noc=0;
int charge=0,count=0;

//function declaration
void bus();
void cycle();
void Riksha();
int menu();
void show_details();
void delet();


int main()
{
while(1)
{
switch(menu())
{

case 1: bus();break;
case 2: cycle();break;
case 3: Riksha();break;
case 4: show_details();break;
case 5: delet();break;
default:printf("invalid choice");
}


}
return 0;
getch();
}
int menu()
{
int ch;
printf("1.BUS ENTRY\n");
printf("2.CYCLE ENTRY\n");
printf("3.RIKSHA ENTRY\n");
printf("4.STATUS\n");
printf("5.DATA ERASE\n\n");
printf("6.EXIT\n");
printf("Enter your choice from the above menu\n");
scanf("%d",&ch);
return(ch); //ch is integer value , therefore int menu()

}
void show_details()
{
printf("The number of buses are %d\n",nob);
printf("The number of cycles are %d\n",noc);
printf("The number of riksha are %d\n",nor);
printf("The total number of vehicles are %d\n", nor+nob+noc);
printf("total amount is %d\n", charge);
}

void delet()
{
nob=0;
noc=0;
nor=0;
count=0;
charge=0;
printf("All values erased");
}

void Riksha()
{
printf("Entered successfully to RIKSHA ENTRY\n");
nor++;
charge=charge+50 ;
count=count++;

}
void cycle()
{ printf("entered successfully to CYCLE ENTRY\n");
  noc++;
  charge=charge+20;
  count++;

}
void bus()
{
printf("entered successfully to BUS ENTRY\n");
 nob++;
charge+=100;
count++;

}
