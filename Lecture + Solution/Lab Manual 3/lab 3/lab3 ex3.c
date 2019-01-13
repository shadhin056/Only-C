#include<stdio.h>
int main()
{
    int a,b,q,r;
    printf("Simple Input\n");
    scanf("%d%d",&a,&b);
    if(b==0)
    {
        printf("Error!! Can't Devide.");
    }
    else
    {
        q=a/b;
        r=a%b;
        printf("Q= %d, R= %d",q,r);
    }
    return 0;
}

