#include<stdio.h>
int main()
{
  int c,s,p;
  printf("Enter the Cost price of the item: ");
  scanf("%d",&c);
  printf("Enter the Selling price of the item: ");
  scanf("%d",&s);
  p=s-c;
  if(p>0)
  {
    printf("made profit of RS-%d/-",p);
  }
  else
  {
    printf("incured loss of RS%d/-",p);
  }
}
