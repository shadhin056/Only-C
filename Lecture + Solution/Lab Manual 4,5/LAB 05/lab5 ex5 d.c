#include<stdio.h>
int main()
{
    int n,sum,i;
    printf("Enter n=");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+(i*(i+1)*(i+2));
    }
    printf("Sum=%d",sum);
    return 0;
}


