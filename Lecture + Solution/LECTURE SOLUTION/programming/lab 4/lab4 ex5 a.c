#include<stdio.h>
int main()
{
    int n,sum,i;
    printf("Enter n=");
    scanf("%d",&n);
    sum=0;
    i=1;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("\nTotal=%d\n",sum);
    return 0;
}
