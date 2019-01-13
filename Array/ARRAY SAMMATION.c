//array sumation

#include<stdio.h>
main()
{
    int a[100],i,n,sum=0;

   printf("\"how much= \"");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("\na[sum]=%d\n\n\n\n",sum);
}
