#include<stdio.h>
int main()
{
    int x,y,i,res;
    printf("Enter x,y :");
    scanf("%d%d",&x,&y);
    res=1;
    for(i=1;i<=y;i++)
        res=res*x;
    printf("%d",res);
}
