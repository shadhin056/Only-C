#include<stdio.h>
int main()
{
    int y1,y2;
    printf("Enter the years");
    scanf("%d%d",&y1,&y2);
    if(y1<y2)
    {
        while(y1<y2)
        {
            if(((y1%4)==0)&&((y1%100)!=0)||((y1%400)==0))
            printf("%d ",y1);
            y1+=1;
        }
    }
    return 0;
}
