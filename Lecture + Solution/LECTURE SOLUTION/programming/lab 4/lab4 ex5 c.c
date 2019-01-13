#include<stdio.h>
int main()
{
    int n,sum,i;
    printf("Enter n=");
    scanf("%d",&n);
    sum=0;
    i=2;
    while(i<=n)
    {
        sum=sum+(i-1)*i;
        i+=2;
    }
    printf("Sum=%d",sum);
    return 0;
}
