#include<stdio.h>
int main()
{
    int i,sc[11],avg=0,ac;
    for(i=1;i<11;i++)
    {
        printf("Enter person %d 's grade: ",i);
        scanf("%d",&sc[i]);
        if(sc[i]<=100)
            avg+=sc[i];
        else
         {
            printf("The higest grade possible is 100\nEnter correct grade: ");
            scanf("%d",&sc[i]);
            avg+=sc[i];
        }
    }
    ac=avg/10;
    printf("The average score is %d",ac);
    return 0;
}
