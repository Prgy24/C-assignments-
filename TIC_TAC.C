#include<stdio.h>
#include<conio.h>

char a[9]={'1','2','3','4','5','6','7','8','9'};//globally declaring so that all functions have access to i

void check (char,char);
void gameShow()
{
printf("\n\t\t\t\t TIC-TAC-TOE \n");
}
void input_symbol()
{
printf("\n Player 1 symbol : x ");
printf("\n Player 2 symbol : 0 ");
}

void start()
{

char pa;
printf(" \n Who wants to start first - player 1 or 2 ?-");
scanf("%d",&pa);
}
void play()
{
char p,s;

flu:
printf("\n Enter the position and symbol of the player :");
fflush(stdin);
scanf("%c",&p);
fflush(stdin);
scanf("%c",&s);
/*if((s != '0') || (s != 'x'))
{
printf("%d",i);
printf("Wrong value entered, enter correct symbol again\n");
goto flu;
}
   */
check(p,s);
}

void check (char P, char S)
{
int i ;
for(i=0;i<=8;i++)
{
 if (a[i]==P)
  {
     a[i]=S;

  }
}
}

void show()
{
printf("\n\n\t\t\t\t-----|-----|-----\n");
printf("\t\t\t\t   %c | %c   | %c \n",a[0],a[1],a[2]);
printf("\t\t\t\t-----|-----|-----\n");
printf("\t\t\t\t   %c | %c   | %c \n",a[3],a[4],a[5]);
printf("\t\t\t\t-----|-----|-----\n");
printf("\t\t\t\t   %c | %c   | %c \n",a[6],a[7],a[8]);
printf("\t\t\t\t-----|-----|-----\n");

}

int winner ()
{
 if(( a[0]=='x' && a[1]=='x' && a[2]=='x') || ( a[3]=='x' && a[4]=='x' && a[5]=='x' ) || ( a[6]=='x' && a[7]=='x' && a[8]=='x') || ( a[0]=='x' && a[3]=='x' && a[6]=='x' ) || ( a[1]=='x' && a[4]=='x' && a[7]=='x') || ( a[2]=='x' && a[5]=='x' && a[8]=='x')|| ( a[0]=='x' && a[4]=='x' && a[8]=='x') || ( a[2]=='x' && a[4]=='x' && a[6]=='x'))
   {
     return 100;

   }
 else if(( a[0]=='0' && a[1]=='0' && a[2]=='0') || ( a[3]=='0' && a[4]=='0' && a[5]=='0' ) || ( a[6]=='0' && a[7]=='0' && a[8]=='0') || ( a[0]=='0' && a[3]=='0' && a[6]=='0' ) || ( a[1]=='0' && a[4]=='0' && a[7]=='0') || ( a[2]=='0' && a[5]=='0' && a[8]=='0')|| ( a[0]=='0' && a[4]=='0' && a[8]=='0') || ( a[2]=='0' && a[4]=='0' && a[6]=='0'))
   {
     return 200;

   }
}
int main()
{

//char a, b ;



int k,i;
        clrscr();
gameShow();
show();
input_symbol();
start();
play();

label:
       clrscr();
show();
play();
k=winner();
clrscr();
show();
for(i=0;i<=8;i++)
{ if((a[i] == 'x') || (a[i]=='0'))
   {
     int count=0;
     count ++;

     if(count==8)
     {
      printf( " Match is DRAW"  );
      getch();
     }
   }
  printf( "Match continues....\n");
}
if(k==100)
{
  printf("++++++Player 1 is winner++++++ ");
}
else if(k==200)
{
 printf("++++++Player 2 is winner++++++ ");
}
else
  goto label;
//printf("Enter two character values:");
//scanf("%c",&a);
//fflush(stdin);// this will flush the buffer before we enter the values , we were not able to get the second value becz the scanf doesnt take input directly from keyboard , if buffer is full , it will take values already present in buffer.
//scanf("%c",&b);
//printf("the values are : a=%c b=%c ", a, b);
getch();
}
