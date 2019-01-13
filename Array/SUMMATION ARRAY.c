//SUMMATION ARRY
#include<stdio.h>
main()
{
    int a[100];
    int n,i,j,sum=0;
  printf("How many NUMBER=");
  scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(j=0; j<n; j++)
    {
        sum=sum+a[j];
    }
    printf("%d",sum);
    return 0;
}
