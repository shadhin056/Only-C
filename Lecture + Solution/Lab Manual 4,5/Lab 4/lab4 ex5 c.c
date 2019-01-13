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
        sum=sum+((2*i)-1)*2*i;
        i++;
    }
    printf("Sum=%d",sum);
    return 0;
}
