#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,x,y;
    float r,area,d,pie=3.1416;
    printf("Simple Input:");
    scanf("%d%d%d%d",&a,&b,&x,&y);
    d=sqrt(((x-a)*(x-a)+(y-b)*(y-b)));
    r=d/2;
    area=pie*r*r;
    if(d==0)
    {
        printf("No circle !!! How I can calculate the area.");
    }
    else
    {
        printf("%.2f",area);
    }
    return 0;
}

