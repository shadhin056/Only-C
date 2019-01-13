#include<stdio.h>
int main()
{
    int n,sum=0,i;
    scanf("%d",&n);
    printf("value   sum\n");
    for(i=2;i<=2*n;i+=2)
    {
        sum=sum+i;
        printf("  %d      %d\n",i,sum);
    }
    return 0;
}
