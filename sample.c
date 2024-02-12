/*

 variable is a two type:
 Number variable & pointer variable



*/
#include<stdio.h>
#include<conio.h>

int main()
{
  int a=10,*p,**q,***r;
  p=&a;
  printf("\nThe value of a is :%d",a);/*Single pointer   */
  printf("\nThe A address is :%d",&a);
  printf("\nThe P value of a is :%d",p);
  printf("\nThe value of a is :%d",*p);
  printf("\nThe value of a is :%d",&p);

  printf("\n--------------------------------------------");

  /* Double pointer*/
  q=&p;
  printf("\nThe q value of a is :%d",q);
  printf("\nThe p address is :%d",&p);
  printf("\nThe q Address value of a is :%d",&q);
  printf("\nThe q value of a is :%d",**q);

  /*Triple Pointer*/

  printf("\n----------------------------------------------");

  r=&q;
  printf("\nThe r  value of a is :%d",r);
  printf("\nThe q address is :%d",&q);
  printf("\nThe r address value of a is :%d",&r);
  printf("\nThe r value of a is :%d",***r);






  return 0;
}
