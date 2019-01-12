/*Write a C program with a function indexr(s,t), which returns the index of right most occurrence
of t in s otherwise -1.*/

#include<stdio.h>
#include<string.h>

int indexr(char [], char);
int main()
{
     char s[20]; 
     char t;
     int count=0;	
	  printf("Enter the string-");
          scanf("%s",s);
	  printf("Enter the character-");
          scanf(" %c",&t);
	  count=indexr(s,t);
if( count==0)
{
          printf("The right most occurance of character is at %d\n",count);
} 
else if (count==-1)
          printf("character not found\n");
return 0;
}

int indexr(char s[],char t)
{
  int i,count=0, len =0;
	len=strlen(s);
     for(i=1;i<=len;i++)
          {
		if(s[i]==t)
                     count=i;
		
	  }
                if(count!=0)
                    return count;
                else
                    
		return -1;
                 

}
       
