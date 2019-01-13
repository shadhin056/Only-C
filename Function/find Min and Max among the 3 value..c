#include<stdio.h>

int max (int a,int b, int c);
int min (int a,int b, int c);

int main ()
{
    int a,b,c,z,y;
    scanf("%d %d %d",&a,&b,&c);
    z=min(a,b,c);
    y=max(a,b,c);
    printf("Min= %d\n",z);
    printf("Max=%d\n",y);
    return 0;
}

int max (int a,int b, int c)
{
    if(a>=b&&b>=c)
        return a;
    if(a>=c&&c>=b)
        return a;
    if(b>=a&&a>=c)
        return b;
    if(b>=c&&c>=a)
        return b;
    if(c>=a&&a>=b)
        return c;
    if(c>=b&&b>=a)
        return c;
}
int min (int a,int b, int c)
{
    if(a>=b&&b>=c)
        return c;
    if(a>=c&&c>=b)
        return b;
    if(b>=a&&a>=c)
        return c;
    if(b>=c&&c>=a)
        return a;
    if(c>=a&&a>=b)
        return b;
    if(c>=b&&b>=a)
        return a;
}
