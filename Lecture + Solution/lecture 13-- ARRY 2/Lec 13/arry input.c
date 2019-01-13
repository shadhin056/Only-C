#include<stdio.h>

int main()
{
    int a[5][3],i,j;

    for(i=0; i<5; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d",&a[i][j]);
    }

    {
        for(i=0; i<5; i++)
        {
            for(j=0; j<3; j++)
                printf("a[%d][%d]=%d\t",i,j,a[i][j]);
            printf("\n");
        }

    }
    return 0;
}

