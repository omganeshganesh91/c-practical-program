#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,re=0,m;
 clrscr();
 printf("enter the no");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   m=n%10;
   re=re*10+m;
   n=n/10;
 }
 printf("Reversed no=%d",re);
 getch();
}