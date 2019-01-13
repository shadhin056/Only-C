#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("\n\n\tenter the number=");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("\n\n\todd sum=%d\n\n\nexit!!!\n\n",sum);
    return 0;
}
