#include<stdio.h>
int main()
{
    int n,m,x,x1,c,max=0;
    scanf("%d%d",&n,&m);
    x=n;
    for(x1=n;x1<m;x1++)
    {
        x=x1;
        c=1;
        while(x!=1)
        {
            if(x%2==1)
            x=3*x+1;
            else
            x=x/2;
            ++c;
        }
        if(c>max)
        max=c;
    }
    printf("%d %d %d",n,m,max);
    return 0;
}

