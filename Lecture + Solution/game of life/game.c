#include<stdio.h>
int main()
{
    int n,n1,g,g1,i,j,k,x,y,x1,x2,y1,y2,a[20][20],b[20][20];
    scanf("%d%d",&n,&n1);
    printf("Take Your Generation: ");
    scanf("%d",&g);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n1;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(g1=1;g1<=g;g1++)
    {
        printf("Genaration:%d\n",g1);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n1;j++)
            {
                k=0;
                x1=i-1;y1=j-1;
                x2=i+1;y2=j+1;
                if(a[i][j]==1)
                {
                    if(x1>=0&&y1>=0&&a[x1][y1]==1)
                    ++k;
                    if(x1>=0&&a[x1][j]==1)
                    ++k;
                    if(x1>=0&&y2>=0&&a[x1][y2]==1)
                    ++k;
                    if(y1>=0&&a[i][y1]==1)
                    ++k;
                    if(y2>=0&&a[i][y2]==1)
                    ++k;
                    if(x2>=0&&y1>=0&&a[x2][y1]==1)
                    ++k;
                    if(x2>=0&&a[x2][j]==1)
                    ++k;
                    if(x2>=0&&y2>=0&&a[x2][y2]==1)
                    ++k;
                    switch(k)
                    {
                        case 2:
                        case 3:
                        b[i][j]=1;
                        break;
                        default:
                        b[i][j]=0;
                    }
                }
                else
                {
                    if(x1>=0&&y1>=0&&a[x1][y1]==1)
                    ++k;
                    if(x1>=0&&a[x1][j]==1)
                    ++k;
                    if(x1>=0&&y2>=0&&a[x1][y2]==1)
                    ++k;
                    if(y1>=0&&a[i][y1]==1)
                    ++k;
                    if(y2>=0&&a[i][y2]==1)
                    ++k;
                    if(x2>=0&&y1>=0&&a[x2][y1]==1)
                    ++k;
                    if(x2>=0&&a[x2][j]==1)
                    ++k;
                    if(x2>=0&&y2>=0&&a[x2][y2]==1)
                    ++k;
                    switch(k)
                    {
                        case 3:
                        b[i][j]=1;
                        break;
                        default:
                        b[i][j]=0;
                    }
                }
                printf("    %d",b[i][j]);
            }
            printf("\n");
        }
        x=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n1;j++)
            {
                if(a[i][j]==b[i][j])
                ++x;
            }
        }
        if(x==n*n1)
        {
            printf("Your Next All Generations Are Same.");
            goto y;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n1;j++)
            {
                a[i][j]=b[i][j];
            }
        }
    }
    y:
    return 0;
}

