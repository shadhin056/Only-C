//MATRIX ADDITION
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,n,m;
    system("color B4");
printf("enter row & colom=");
    scanf("%d%d",&n,&m);


    printf("1st matrix \n");
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            scanf("%d",&a[i][j]);
    printf("\n2nd matrix\n");
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            scanf("%d",&b[i][j]);
//*****************************************************

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("\nThe Addition of two matrix is=\n");
    for(i=0; i<n; i++)
    {
        printf("\n");
        for(j=0; j<m; j++)
            printf("%d ",c[i][j]);
    }
    printf("\n");
}
