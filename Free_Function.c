
//Free Function Function
#include<stdio.h>
#include<stdlib.h>
//The Calloc function can be define a "0" values.

int main(){

 int i,n;
 printf("Enter The Limit:");

 scanf("%d",&n);

 int *ptr=(int *)calloc(n,sizeof(int));

 if (ptr==NULL)
   {
    printf("Memory is not Available.....");
    exit(1);


 }
    for(i=0;i<n;i++){
        printf("\nThe value of is: %d ",*(ptr+i) );
    }

    printf("\n-----------------------");

    for(i=0;i<n;i++)
        {


            printf("Enter a integer :");
            scanf("%d ",ptr+i);  //&ptr used store and print Memory Address.
        }
  return 0;
}
