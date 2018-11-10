/*Write a program to find whether the given processor is little endian or big endian.*/

#include<stdio.h>
int func1(int);
int main()
{
int d1,m1,y1,d2,m2,y2,i,y;
int ref,dd1,dd2;
		printf("Enter the first date--");
		scanf("%d-%d-%d",&d1,&m1,&y1);
		printf("Enter the second date--");
		scanf("%d-%d-%d",&d2,&m2,&y2);
     ref=y1;
            if(y2<y1)
            ref=y2;
     dd1=0;
     dd1=func1(m1);
                for(i=ref;i<y1;i++)
		  {
                    if((y1%4==0)&&(y1%100!=0)||(y1%400==0))
			dd1+=1;
		  }
     dd1=dd1+d1+(y1-ref)*365;
     printf("No. of days to the first date from 1st jan %d--%d\n",y1,dd1);
     dd2=0;
  		for(i=ref;i<y2;i++)
                {
		  if((y2%4==0)&&(y2%100!=0)||(y2%400==0))
			dd2+=1;
		}
      dd2=func1(m2)+dd2+d2+(y2-ref)*365;
      printf("No. of days from the reference year to the 2nd date--%d\n",dd2);
      printf("So the difference between the two dates is--%d\n",dd2-dd1);
return 0;
}

 int func1(int x)
{
  int y;
        switch(x)
        {
             case 1: y=0; break;
             case 2: y=31; break;
             case 3: y=59; break;
             case 4: y=90; break;
             case 5: y=120; break;
             case 6: y=151; break;
             case 7: y=181; break;
             case 8: y=212; break;
             case 9: y=243; break;
             case 10: y=273; break;
             case 11: y=304; break;
             case 12: y=334; break;
        default:printf("Error Encountered\n");
        }
return y;
}


