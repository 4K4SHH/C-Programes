//program to find the value of one number raised to the power of the other//
#include<stdio.h>
int main()
{
  int base,exp,res=1,exp2;
  printf("Enter first number: ");
  scanf("%d",&base);
  printf("Enter second number: ");
  scanf("%d",&exp);
  exp2=exp;
  while(exp)
  {
    res=res*base;
    exp--;
  }
  printf("%d rasied to power of %d = %d",base,exp2,res);
}
