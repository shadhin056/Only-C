#include<stdio.h>
int main()
{
    int a[5][4],i,j;
    system("color B4");
    for(i=0; i<5; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0; i<5; i++)
        a[i][3]=a[i][0]+a[i][1]+a[i][2];
    {
        for(i=0; i<5; i++)
        {
            for(j=0; j<4; j++)
                if(j!=3)
                {
                    printf("a[%d][%d]=%d  ",i,j,a[i][j]);
                }
                else
                {
                    printf("[*]score of stdent [%d]= %d",i,a[i][j]);
                }
            printf("\n");
        }
    }
    return 0;
}
