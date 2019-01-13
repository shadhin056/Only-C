#include<stdio.h>
int main()
{
    int a,b,c,min,max,mid;
    printf("Please Enter a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    mid=(a+b+c)/3;
    if(a>b)
    {
        min=b;
        max=a;
        printf("Max=%d,Min=%d,Mid=%d",max,min,mid);
    }
    else if(a>c)
    {
        min=c;
        max=a;
        printf("Max=%d,Min=%d,Mid=%d",max,min,mid);
    }

    else if(b>a)
    {
        min=a;
        max=b;
        printf("Max=%d,Min=%d,Mid=%d",max,min,mid);
    }
    else if(b>c)
    {
        min=c;
        max=b;
        printf("Max=%d,Min=%d,Mid=%d",max,min,mid);
    }
    else if(c>a)
    {
        min=a;
        max=c;
        printf("Max=%d,Min=%d,Mid=%d",max,min,mid);
    }
    else
    {
        min=b;
        max=c;
        printf("Max=%d,Min=%d,Mid=%d",max,min,mid);
    }
    return 0;

}

