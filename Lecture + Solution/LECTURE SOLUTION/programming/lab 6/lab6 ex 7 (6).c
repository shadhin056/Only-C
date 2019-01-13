#include<stdio.h>
int main()
{
    int n,sum,i,sum1;
    printf("Enter n=");
    scanf("%d",&n);
    sum=1;
    sum1=0;
    for(i=0;i<n;i++)
    {
        sum=sum+i;
        sum1=sum1+sum;
    }
    printf("Sum is %d",sum1);
    return 0;
}

