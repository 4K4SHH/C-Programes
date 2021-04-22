#include<stdio.h>
void main()
{
  int n=0,i=1,s;
  s=n+i;
  while (n<30)
  {
    printf("%d ",s);
    n=i;
    i=s;
    s=n+i;
  }
  printf("\n");
}
