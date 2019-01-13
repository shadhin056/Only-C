#include<stdio.h>
int main()
{
    int n,sum,i;
    printf("Enter n=");
    scanf("%d",&n);
    sum=0;
    for(i=2;i<=n;i+=2)
    {
        sum=sum+(i-1)*i;
    }
    printf("Sum=%d",sum);
    return 0;
}

