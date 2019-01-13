//1+1/2+1/3+1/4+.............+n

#include<stdio.h>
int main()
{
    int n,i;
    float sum=0;
    printf("enter number= ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
         sum=sum+1.0/i;
    {
    printf("\n%.2f\n",sum);
    }

}
