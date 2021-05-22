//program  to reverse a five digit number //
#include<stdio.h>
void main()
{
  int n,rev=0,a;
  printf("Enter a 5digit number to reverse:");
  scanf("%d",&n);
  if(n>=10000 && n<=100000)
  {
    while(n>0)
    {
      a=n%10;
      rev=rev*10+a;
      n=n/10;
    }
    printf("%d\n",rev);
  }
  else
  {
    printf("ENTER A VALID 5 DIGIT NUMBER\n");
  }
}
