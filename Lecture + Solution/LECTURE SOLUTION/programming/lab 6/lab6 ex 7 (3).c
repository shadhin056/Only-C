#include<stdio.h>
int main()
{
    int n,i;
    float sum;
    printf("Enter n=");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+1.0/i;
    }
    printf("Sum=%f",sum);
    return 0;
}
