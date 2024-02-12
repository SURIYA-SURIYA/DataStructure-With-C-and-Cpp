#include<stdio.h>
#include<conio.h>

int main()
{
  int a[]={10,20,30,40};/*Array values addresses 10=6422016,20=6422020,30=6422024,40=6422028 */
  int *p;
  p=&a;

  printf("\nEnter the array Address:%d",p);/*the first array element can be display te output*/
  printf("\nEnter the array Address:%d",&a[1]);
  printf("\nEnter the array size:%d",sizeof(a));/*(4*4=16)*/


  printf("\n--------------------------------------");


  p++;/*post increment*/
  printf("\nEnter the array Address:%d",p);
  printf("\nEnter the array value is :%d",*p);

  printf("\n-----------------------------------------");
  /*Pre Increment*/
  printf("\n pre increment value is:%d",*++p);
  printf("\n pre increment value is:%d",++*p);



  return 0;
}

