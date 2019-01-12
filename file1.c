/*Experiment to find out what happens when printf argument string contains \x, where x is some
character (a, b, c, \, ^ etc). What are your observations.*/

#include<stdio.h>
int main(void)
{
printf("a:\a");/*valid*/
printf("b:\b");/*valid*/
printf("c:\c");
printf("d:\d");
printf("e:\e");/*valid*/
printf("f:\f");/*valid*/
printf("g:\g");
printf("h:\h");
printf("i:\i");
printf("j:\j");
printf("k:\k");
printf("l:\l");
printf("m:\m");
printf("n:\n");/*valid*/
printf("o:\o");
printf("p:\p");
printf("q:\q");
printf("r:\r");/*valid*/
printf("s:\s");
printf("t:\t");/*valid*/
printf("u:\u2603");/* \u below stands for unicode.its a universal character which is only valid in c++without anything it will give errors*/
                   /*    therefore we give 2603 unicode codepoint which stands for snowman*/
printf("v:\v"); /*valid*/    
printf("w:\w");
printf("x:\xD");/* \x is for hexadecimal,it should be followed by   valid hexadecimal. therefore we give \xD  to make it valid*/
printf("y:\y");
printf("z:\z");
printf("A:\A");
printf("B:\B");
printf("C:\C");
printf("D:\D");
printf("E:\E");
printf("F:\F");
printf("E:\E");/*valid*/
printf("F:\F");
printf("G:\G");
printf("H:\H");
printf("I:\I");
printf("J:\J");
printf("K:\K");
printf("L:\L");
printf("M:\M");
printf("N:\N");
printf("O:\O");
printf("P:\P");
printf("Q:\Q");
printf("R:\R");
printf("S:\S");
printf("T:\T");
printf("U:\U00002603");/* \U below stands for unicode.its a universal character which is only valid in c++without anything it will give  errors*/  
                       
                       /*    therefore we give 2603 unicode codepoint which stands for snowman*/
printf("V:\V");
printf("W:\W");
printf("X:\X");
printf("Y:\Y");
printf("Z:\Z");
printf("0:\0");/*valid*/
printf("1:\1");/*valid*/
printf("2:\2");/*valid*/
printf("3:\3");/*valid*/
printf("4:\4");/*valid*/
printf("5:\5");/*valid*/
printf("6:\6");/*valid*/
printf("7:\7");/*valid*/
printf("8:\8");
printf("9:\9");
printf("~:\~");
printf("!:\!");
printf("@:\@");
printf("#:\#");
printf("%:\%");
printf("$:\$");
printf("^:\^");
printf("&:\&");
printf("*:\*");
printf("(:\(");/*valid*/
printf("):\)");
printf("+:\+");
printf("=:\=");
printf("==:\==");
printf("|:\|");
printf("||:\||");
printf("?:\?");/*valid*/
printf(">:\>");
printf("<:\<");
printf("{:\{");/*valid*/
printf("}:\}");
printf("[:\[");
printf("]:\]");
printf(" :\ ");
printf("\:\\");
printf("\:\\");
printf("/:\/");
printf(";:\;");
printf("::\:");
printf("\";\"");/*valid*/
printf("':\'");/*valid*/
return 0;
}




