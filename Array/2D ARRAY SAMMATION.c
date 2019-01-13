//2 ARRY normal
#include<stdio.h>
main()
{   int a[100][100];
    int n,m,i,j,k,sum=0;
    printf("Enter row : ");
    scanf("%d",&n);
    printf("Enter column= ");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
            //printf("\n");
            sum=sum+a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("%d",sum);
    return 0;
}
