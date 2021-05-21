//program to find ASCII values and their eqivalent characters// 
#include<stdio.h>
void main()
{
  int i=32;
  while(i<127)
  {
    printf("%3d = %c\n",i,i);
    i++;
  }
}
