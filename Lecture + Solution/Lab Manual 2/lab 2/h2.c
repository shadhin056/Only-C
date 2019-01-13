#include<stdio.h>
int main()
{
    int a,b,c,d,add1,sub1,mul1,div1,add2,sub2,mul2,div2;

    printf("Enter 4 digit= ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    add1 =a*d+b*c ;
    add2 =b*d;

    sub1 =a*d-b*c;
    sub2 =b*d;

    mul1 =a*c;
    mul2 =b*d;

    div1 =a*d;
    div2 =b*c;

    printf("Addition=%d/%d",add1,add2);
    printf("\nSubtraction=%d/%d",sub1,sub2);
    printf("\nMultiplication=%d/%d",mul1,mul2);
    printf("\nDivision=%d/%d",div1,div2);
    return 0;

}
