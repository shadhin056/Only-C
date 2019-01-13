//1+2+4+7+11......up to numbers

#include<stdio.h>
main()
{
    int i,sum=1,n,sum1=0;
    printf("enter number");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        sum=sum+i;
        sum1=sum1+sum;
    }
    printf("result=%d",sum1);
}
