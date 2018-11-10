/*Write a program to find whether the given processor is little endian or big endian.*/

#include<stdio.h>

int main()
{
  int i=0x123456;
  printf(" If '1' then it is a little endian %d\n",(*(char*)&i)==0x56?1:0);
return 0;
}
