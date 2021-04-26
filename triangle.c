//to check the triangle is valid or not//
#include<stdio.h>
int main()
{
  int a,b,c,s;
  printf("Enter the three angles of triangle: ");
  scanf("%d%d%d",&a,&b,&c);
  s=a+b+c;
  if(s!=180)
  {
    printf("this triange is not valid" );
  }
  else
  {
    printf("this triange is valid" );
  }
}
