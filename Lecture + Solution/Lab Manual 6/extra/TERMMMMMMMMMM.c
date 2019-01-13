#include<stdio.h>
main()
{
    int n,a=1,d=2,sum=0,term;

    printf("ENTER N=");
    scanf("%d",&n);

    term=a+(n-1)*d;

    for(a=1;a<=term;a=a+2)
    {
        sum=sum+a;
    }
    printf("ANS=%d",sum);
}
