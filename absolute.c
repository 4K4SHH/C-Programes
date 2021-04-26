//absolute number//
#include<stdio.h>
int main()
{
  int n,a;
  printf("Enter a number: ");
  scanf("%d",&n);
  if(n<0)
  {
    a=-(n);
    printf("|%d|=%d\n",n,a);
  }
  else
  {
  printf("|%d|=%d\n",n,n);
  }
}
