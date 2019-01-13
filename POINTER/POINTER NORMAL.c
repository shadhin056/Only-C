//pointer
#include<stdio.h>
int main()
{
    int x,y,*ptr;
    printf("enter X=");
    scanf("%d",&x);

    ptr=&x;
    y=*ptr;

    printf("ANS   Y=%d",*ptr);
    printf("\nANS   Y=%d",y);

    y=x;
    printf("\nRETURN x=%d\n",x);
}
