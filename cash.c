//program to compute the smallest no of notes that combined to give entered amount//
#include<stdio.h>
void main()
{
  int a,b;
  printf("Enter the amount: ");
  scanf("%d",&a);
  {
    b=a/100;
    a=a%100;
    printf("100 x %d\n",b);
    b=a/50;
    a=a%50;
    printf("50 x %d\n",b );
    b=a/10;
    a=a%10;
    printf("10 x %d\n",b);
    b=a/5;
    a=a%5;
    printf("5 x %d\n",b);
    b=a/2;
    a=a%2;
    printf("2 x %d\n",b);
    b=a/1;
    a=a%1;
    printf("1 x %d\n",b);
  }
}
