#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n;
    printf("Enter the limit:");
    scanf("%d",&n);

    int *ptr=(int *)malloc(n*sizeof(int));
    if (ptr==NULL)
    {

        printf("Memory is not Available...");
        exit(1);

    }

    for(i=0;i<n;i++){
        printf("\nMemory is:%d ",*(ptr+i));
    }
    printf("\n---------------------------------------");
    for(i=0;i<n;i++){
        printf("\nThe Value is:");
        scanf("%d",ptr+i);
    }
return 0;
}
