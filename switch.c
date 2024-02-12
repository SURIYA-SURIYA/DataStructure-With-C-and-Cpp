#include<stdio.h>
#include<conio.h>

int main()
{
  char n;
  printf("Enter the char:");
  scanf("%c",&n);

  switch(n)
  {

  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
  printf(n,"%c:is a vowel");
  break;
  default:
  printf(n,"%c is a consonent");
  break;
  }


  return 0;
}

