#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char*fruits[]={"2 orange","2 apples","3 banana","1 pineapple"};
  if(strcmp(fruits[1],fruits[2])<0)
  printf("\n%s are lesser than %s",fruits[1],fruits[2]);
  else
  if(strcmp(fruits[1],fruits[2])>0)
  printf("\nare greater than %s",fruits[1],fruits[2]);
  getch();
}