#include<stdio.h>
int main()
{
    int n,i;
    float sum;
    printf("Enter n=");
    scanf("%d",&n);
    sum=0;
    i=1;
    while(i<=n)
    {
        sum=sum+1.0/i;
        i++;
    }
    printf("Sum=%f",sum);
    return 0;
}
