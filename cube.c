//program to find the cube root of an integer.
#include<stdio.h>
#include<math.h>
void main()
{
  int n,a,b;
  printf("Enter a number: ");
  scanf("%d",&n);
  a=cbrt(n);
  b=a*a*a;
  if(n==b)
  {
    printf("%d is the cube root of %d",a,n);
  }
  else
  {
    printf("%d is not a perfect cube",n);
  }

}
