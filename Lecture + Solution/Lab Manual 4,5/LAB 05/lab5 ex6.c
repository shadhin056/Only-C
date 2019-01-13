#include<stdio.h>
int main()
{
    int y1,y2,y;
    printf("Enter the years");
    scanf("%d%d",&y1,&y2);
    if(y1<y2)
    {
        for(y=y1;y<y2;y++)
        {
            if(((y%4)==0)&&((y%100)!=0)||((y%400)==0))
            printf("%d ",y);
        }
    }
    return 0;
}

