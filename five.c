//sum of 5 digits in a fivedigit number//
#include<stdio.h>
void main()
{
  {
    int n,l=0,sum=0;
    printf("Enter a five digit number: ");
    scanf("%d",&n);
    while(n!=0)
    {
      l=n%10;
      sum=sum+l;
      n=n/10;
    }
    printf("%d",sum);
    printf("\n");
  }
}
