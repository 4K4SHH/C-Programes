//programe to find whether 3 points are on a straight line//
#include<stdio.h>
int main()
{
  float x1,y1,x2,y2,x3,y3,ab,bc,ca;
  printf("Enter first points (x1,y1): ");
  scanf("%f%f",&x1,&y1);
  printf("Enter second points (x2,y2): ");
  scanf("%f%f",&x2,&y2);
  printf("Enter three points (x3,y3): ");
  scanf("%f%f",&x3,&y3);
  ab=(y2-y1)/(x2-x1);
  bc=(y3-y2)/(x3-x2);
  ca=(y3-y1)/(x3-x1);
  printf("slope of ab =%f\n",ab);
  printf("slope of bc =%f\n",bc);
  printf("slope of ca =%f\n",ca);
  if(ab!=(bc=ca))
  {
    printf("the three points are not on a straight line\n");
  }
  else
  {
    printf("the three points are on a straight line\n");
  }
}
