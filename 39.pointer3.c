/*A C program contains the following declaration
char *color[6] = {“red”, “green”, “blue”, “white”, “black”, “yellow”};
a. What is the meaning of color?
b. What is the meaning of (color+2);
c. What is the value of *color?
d. What is the value of *(color+2)?
e. How do color[5] and *(color + 5) differ?.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
int i;
char *color[6] = {"red", "green", "blue", "white", "black", "yellow"};
	for(i=0;i<7;i++)
{
  
    printf("%d\n",(&*color[i]));
}
	printf("color:%d\n ", color);
        printf("(color+2):%d\n",(color+2));
        printf("*color:%s\n",*color);
        printf("*(color+2):%s\n",*(color+2));
        printf("color[5]:%s \n", color[5]);
	printf("*(color + 5):%s \n",*(color+5));
     return 0;
}
