#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c,d,e,no;
 clrscr();
 printf("Enter no to reverse:");
 scanf("5d",&no);
 a=no%10;
 b=(no/10)%10;
 c=(no/100)%10;
 d=(no/1000)%10;
 e=no/10000;
 printf("/n reverse a no:");
 printf("%d%d%d%d%d",a,b,c,d,e);
 getch();
}
