#include<stdio.h>
#include<conio.h>

int main()
{
  int a=10,*p,*r;
  p=&a;
  printf("\n The a value of size is:%d",sizeof(a));
  printf("\n The a value of size is:%d",p);
  printf("\n The a value of size is:%d",p+1);

  return 0;
}

