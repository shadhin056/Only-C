#include<stdio.h>
    int a[3][3],b[3][3],c[3][3],row,clm,row1,clm1;
void inputA()
{
        int i,j;
    printf("row,clm:");
    scanf("%d%d",&row,&clm);
    for(i=0;i<row;i++)
    {
        for(j=0;j<clm;j++)
        {
            printf("\na[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
void inputB()
{
        int i,j;
    printf("row1,clm1:");
    scanf("%d%d",&row1,&clm1);
    for(i=0;i<row1;i++)
    {
        for(j=0;j<clm1;j++)
        {
            printf("\na[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
void calc()
{
        int i,j,k;
    for(i=0;i<row;i++)
    {
        for(j=0;j<clm1;j++)
        {
            c[i][j]=0;
            for(k=0;k<row1;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}
void output()
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<clm1;j++)
        {
            printf("\t%d",c[i][j]);
        }
        printf("\n\n");
    }
}
int main()
{
    inputA();
    inputB();
    calc();
    output();
    return 0;
}

