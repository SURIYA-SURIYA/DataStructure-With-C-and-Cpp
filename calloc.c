//calloc Function
#include<stdio.h>
#include<stdlib.h>
//The Calloc function can be define a "0" values.

int*getting_values(){
   int i,n=0;


 int *ptr=(int *)calloc(n,sizeof(int));

 for(i=0;i<n;i++){


    printf("Enter The Limit:");
     scanf("%d",&n);
 }
 return ptr;
}




int main(){


int i,n=0
int *ptr=getting_values();

    for(i=0;i<n;i++)
        {
            n+=*(ptr+i);

        }
            printf("Total : %d",n);
            free(ptr);
            ptr==NULL;

  return 0;
}
