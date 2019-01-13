//matrix multiplication DETAILS
#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5],i,j,k,sum=0,m,n,o,p;
    system("color F4");
    printf("row & column of first matrix= ");
    scanf("%d %d",&m,&n);
    printf("\nrow & column of second matrix= ");
    scanf("%d %d",&o,&p);
//*********************IF CHECK
    if(n!=o)
    {
        printf("Matrix mutiplication is not possible\n\n");
        printf("\nColumn of first matrix must be same as row of second matrix\n\n");
    }
    else
    {
//*************************input
        printf("\n   1st matrix=");
        printf("\n");
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                scanf("%d",&a[i][j]);
//*************************input
        printf("\n   2nd matrix=");
        printf("\n");
        for(i=0; i<o; i++)
            for(j=0; j<p; j++)
                scanf("%d",&b[i][j]);
//*************************made
        for(i=0; i<m; i++)
            for(j=0; j<p; j++)
                c[i][j]=0;
//******************calculation
        for(i=0; i<m; i++) //row of first matrix
        {
            for(j=0; j<p; j++) //column of second matrix
            {
                sum=0;
                for(k=0; k<n; k++)
                    sum=sum+a[i][k]*b[k][j];
                c[i][j]=sum;
            }
        }
//*******************OUTPUT
        printf("   Multiplication of two matrix is=\n");
        for(i=0; i<m; i++)
        {
            printf("\n");
            for(j=0; j<p; j++)
            {
                printf("%d  ",c[i][j]);
            }
        }
        printf("\n*********************************************************************\n");
    }
    return 0;
}
