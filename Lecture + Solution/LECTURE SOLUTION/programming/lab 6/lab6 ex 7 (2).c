#include<stdio.h>
int main()
{
    int n,sum,i;
    printf("Enter n=");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("\nTotal=%d\n",sum);
    return 0;
}

