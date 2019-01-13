// 2 DIAMONTIAL ARRY SUMMATION
//easy way

#include<stdio.h>
main()
{
    int a[100][100],b[100][100],c[100];
    int i,j,sum=0,m,n;
    // system("color F4");
//******INPUT
    printf("Enter row : ");
    scanf("%d",&n);
    printf("Enter column= ");
    scanf("%d",&m);
    for(i=0; i<n; i++)
    {
        sum=0;
        for(j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
        c[i]=sum;
    }
//****OUTPUT
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            printf("a[%d][%d]=%d  ",i,j,a[i][j]);
        printf("TOTAL=%d",c[i]);
        printf("\n");
    }
}
