#include<stdio.h>
int main()
{
  char c;
  int choice;
  printf("Enter a character: ");
  scanf("%c",&c);
  if(c>=65 && c<=90)
  {
    printf("CAPITAL LETTER\n");
  }
  else if(c>=97 && c<=122)
  {
    printf("SMALL LETTER\n");
  }
  else if(c>=48 && c<=57)
  {
    printf("DIGit\n");
  }
  else if(c>=0 && c<=47 || c>=58 && c<=64 || c>=91 && c<=96)
  {
    printf("SYMBOLS\n");
  }
}
