//2 ARRaY SUMMATION

#include<stdio.h>
main()
{
    int a[4][4];
    int i,j;
 system("color C4");
    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<4; i++)
        a[i][3]=a[i][0]+a[i][1]+a[i][2];
    {
        for(i=0; i<4; i++)
        {
            for(j=0;j<4;j++)

                if(j!=3)
                    printf("a[%d][%d]=%d  ",i,j,a[i][j]);
                else
                    printf(" total student=[%d]=%d",i,a[i][j]);
                printf("\n");

        }
    }

}
