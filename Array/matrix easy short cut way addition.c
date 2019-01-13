//matrix easy short cut way addition

#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],i,j,n,m;
    system("color B4");
    printf("enter row & colom=");
    scanf("%d%d",&n,&m);

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
        scanf("%d%d",&a[i][j],&b[i][j]);
         c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
//*********************************
    printf("\nThe Addition of two matrix is=\n");
    for(i=0; i<n; i++)
    {
        printf("\n");
        for(j=0; j<m; j++)
            printf("%d ",c[i][j]);
    }
    printf("\n");
}

