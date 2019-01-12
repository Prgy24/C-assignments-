/*Define structure with two members (one int and other char). Also define s union with two
members (one int and other char). Print the sizes of structure and union in number of bytes.*/

#include<stdio.h>

struct member1
{
  int a;
  char b;
};

union member2
{
   int a;
   char b;
};

int main()
{
struct member1 m1;
union member2 s;

		printf("size of struct member1 is--%lu\n",sizeof(m1));
		printf("size of union member2 is--%lu\n",sizeof(s));

return 0;

}
