#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,f=1;
  i=f=1;
  printf("Enter any factorial");
  scanf("%d",&n);
  while(i<=n)
  {
   f=f*i;
   i++;
  }
  printf("\nthe factorial %d",f);
  getch();
}
