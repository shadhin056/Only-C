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
        sum=sum+(i*(i+1)*(i+2));
        i++;
    }
    printf("Sum=%d",sum);
    return 0;
}
