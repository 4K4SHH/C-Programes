#include<stdio.h>
void main()
{
  int a,b,c;
  printf("Enter First Number: ");
  scanf("%d",&a);
  printf("Enter Second Number: ");
  scanf("%d",&b);
  c=a;
  a=b;
  b=c;
  printf("First Number=%d\n",a);
  printf("Second Number=%d\n",b);
}
