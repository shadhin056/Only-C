//revers number

#include<stdio.h>
int main()
{
    int a[5],i,j;
    printf("Enter 5 number :\n");
    for(i=0;i<5;i++)
    {
       printf("enter a[%d]=",i);
       scanf ("%d",&a[i]);
    }
    for(j=4;j>=0;j--)
    {
        printf("%d\n",a[j]);
    }
    return 0;
}
