//calloc Function
#include<stdio.h>
#include<stdlib.h>
//The Calloc function can be define a "0" values.

int main(){

 int i;
 int *ptr=(int *)malloc(3*sizeof(int));

 if (ptr==NULL)
   {
    printf("Memory is not Available.....");
    exit(1);


 }
    printf("\n-----------------------");

    for(i=0;i<3;i++)
        {


            printf("\nEnter a integer :");
            scanf("%d ",ptr+i);  //&ptr used store and print Memory Address.
        }

        ptr=(int *)realloc(ptr,5*sizeof(int));

        for(i=0;i<5;i++)
        {
            scanf("%d",ptr+i);
        }
        for(i=0;i<5;i++){

            printf("\n%d ",*(ptr+i));

        }

 return 0;
}

