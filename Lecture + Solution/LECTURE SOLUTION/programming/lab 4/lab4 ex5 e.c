#include<stdio.h>
int main()
{
    int n,sum,i,sum1;
    printf("Enter n=");
    scanf("%d",&n);
    sum=1;
    i=0;
    sum1=0;
    while(i<n)
    {
        sum=sum+i;
        sum1=sum1+sum;
        i++;
    }
    printf("Sum is %d",sum1);
    return 0;
}
