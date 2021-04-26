//*program to receive values of latitude (L1,L2) and longitude (G1,G2) in degrees of two places on earth and find the distance b/w them
#include<stdio.h>
#include<math.h>
void main()
{
  float l1,l2,g1,g2,d;
  printf("Enter the latitude and logitude of first place:");
  scanf("%f%f",&l1,&g1);
  printf("Enter the latitude and logitude of second place:");
  scanf("%f%f",&l2,&g2);
  l1=l1*(3.14/180);
  l2=l2*(3.14/180);
  g1=g1*(3.14/180);
  g2=g2*(3.14/180);
  d=3963*acos((sin(l1)*sin(l2))+(cos(l1)*cos(l2)*cos(g2-g1)));
  printf("Distance in nautical miles = %f",d);
}
