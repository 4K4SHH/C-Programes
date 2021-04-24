#include<stdio.h>
#include<math.h>
void main()
{
  int a,b,c,s,area;
  printf("Enter the lengths of sides of triangle");
  scanf("%d%d%d",&a,&b,&c);
  s=a+b+c;
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("%d",area);
}
