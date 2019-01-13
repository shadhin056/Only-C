
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int arr[100];

    ptr=(int *)malloc(100*sizeof(int));
    ptr[1]=5;
    printf("%d\n",ptr[1]);
    free(ptr);


}
