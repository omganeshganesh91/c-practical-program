#include<stdio.h>
#include<conio.h>
void main()
{
  int n,j,i;
  printf("How many rows you want in your pramid/\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=2*n-1;j++)
    {
      if(j>=n-(i-1) && j<=n+(i+1))
      {
	 printf("$");
      }
      else
	 printf(" ");
    }
    printf("\n");
  }
getch();
}