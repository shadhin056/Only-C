#include<stdio.h>
main()
{
    int num,a,b,c,d,sum;
    printf("enter any number=");
    scanf("%d",&num);

    a=num/100;
    b=num%100;
    c=b/10;
    d=b%10;

    sum=d*100+c*10+a;
    printf("revers=%d",sum);

}
