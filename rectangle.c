//program to check area and perimeter of the rectangle is equal//
}
#include<stdio.h>
#include<math.h>
int main()
{
  int l,b,p,a;
  printf("Enter the length of the rectangle: ");
  scanf("%d",&l);
  printf("Enter the breadth of the rectangle: ");
  scanf("%d",&b);
  a=l*b;
  p=2*(l+b);
  printf("area = %d\n",a);
  printf("perimeter = %d\n",p);
  if(a==p)
  {
    printf(" area and perimeter of the triangle is equal");
  }
  else
  {
    printf(" area and perimeter is not  equal");
  }
}
