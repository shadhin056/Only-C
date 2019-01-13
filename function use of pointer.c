
#include<stdio.h>
void inc (int *a)
{
    (*a)++;
}
int main()
{
    int a=5;
    printf("%d",a);
    inc(&a);
    printf(" %d",a);

    return 0;
}
