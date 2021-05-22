//multiplication table(upto 20) of a number entered//
#include<stdio.h>
void main()
{
  int n,i,b;
  printf("Enter a number for multplication table:");
  scanf("%d",&n);
  for(i=1;i<=20;i++)
  {
    b=i*n;
    printf("%d x %2d = %d\n",n,i,b);
  }
}
