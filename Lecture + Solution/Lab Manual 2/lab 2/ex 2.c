#include<stdio.h>

main()

{
    int x,y,q,r;

    printf("Enter x = ");
    scanf("%d",&x);

    printf("Enter y = ");
    scanf("%d",&y);

    q = x/y;
    r = x%y;

    printf("Quotient = %d",q);
    printf("Remainder = %d",r);
}
