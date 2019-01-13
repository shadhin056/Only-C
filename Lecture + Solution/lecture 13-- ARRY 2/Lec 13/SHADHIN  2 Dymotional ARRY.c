////2 dymotional arry with input

#include<stdio.h>
int main()
{
    int a[100][100];
    printf("a[2][32]=");
    scanf("%d",&a[2][32]);
    printf("\na[2][32]=%d\n",a[2][32]);
    return 0;
}

******************************
******************************

//2 ARRY INPUT OUTPUT

#include<stdio.h>
main()
{
  int a[3][2],i,j;
  for(i=0;i<3;i++)
   {
    for(j=0;j<2;j++)
     {
        printf("a[%d][%d]= ",i,j);
        scanf("%d",&a[i][j]);
     }
   }
}
******************************
******************************
//2 ARRY INPUT OUT PUT ( unlimited )
#include<stdio.h>
main()
{   int a[100][100];
    int n,m,i,j;
    printf(" row & colum= ");
    scanf("%d %d",&n,&m);

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
            printf("\n");
        }
    }
}

******************************
******************************

//ARRY DIAMON INPUT & OUT PUT TANJIR

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


*******************************
*******************************
// 2 DIMONARRY SUMMATION
#include<stdio.h>
main()
{
    int a[100][100],row,col,i,j,sum=0;
    printf("enter row & colam=");
    scanf("%d%d",&row,&col);

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
    }
    printf("%d",sum);
}
********************************
********************************
//2 ARRY summation normal
#include<stdio.h>
main()
{   int a[100][100];
    int n,m,i,j,k,sum=0;
    printf(" row & colum= ");
    scanf("%d %d",&n,&m);

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
            printf("\n");
        sum=sum+a[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}
*********************************
*********************************
//2 ARRAY WITH SAMMATION WITH TANJIR

#include<stdio.h>
int main()
{
    int a[5][4],i,j;
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
                if(j<3)
                    printf("a[%d][%d]=%d",i,j,a[i][j]);
                else
                    printf("score of std [%d]=%2d",i,a[i][j]);
            printf("\n");
        }
    }
    return 0;
}


************************************
************************************

//2 ARRAY WITH SAMMATION WITH 
//  1/3 gap

#include<stdio.h>
int main()
{
    int a[5][4],i,j;
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
                    printf("a[%d][%d]=%d  ",i,j,a[i][j]);
            printf("\n");
        }
    }
    return 0;
}
**************************************
**************************************

//2 ARRAY WITH SAMMATION WITH
//  1/1 gap

#include<stdio.h>
int main()
{
    int a[5][4],i,j;
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
            {
                printf("a[%d][%d]=%d",i,j,a[i][j]);
                printf("\n");
            }
        }
    }
    return 0;
}

*******************************************
*******************************************


//2 ARRAY WITH SAMMATION WITH DETAILS



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
***********************************
***********************************
MY CODE

//2 ARRY INPUT OUTPUT

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
************************
************************
// 2 DIAMONTIAL ARRY SUMMATION
//easy way

#include<stdio.h>
main()
{
    int a[100][100],b[100][100],c[100];
    int i,j,sum=0;
    system("color F4");
//******INPUT
        for(i=0;i<3;i++)
        {
            sum=0;
            for(j=0;j<3;j++)
            {
                scanf("%d",&a[i][j]);
                sum=sum+a[i][j];
            }
            c[i]=sum;
        }
//****OUTPUT
    for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    printf("a[%d][%d]=%d  ",i,j,a[i][j]);
    printf("TOTAL=%d",c[i]);
        printf("\n");
}
}
******************************************************
// 2 DIAMONTIAL ARRY SUMMATION
//easy way with unlimited summation

#include<stdio.h>
main()
{
    int a[100][100],b[100][100],c[100];
    int i,j,sum=0,m,n;
    system("color F4");
    printf("enter row & colom=");
    scanf("%d%d",&n,&m);
//*****INPUT
        for(i=0;i<n;i++)
        {
            sum=0;
            for(j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
                sum=sum+a[i][j];
            }
            c[i]=sum;
        }

        printf("\n");
//**OUTPUT
    for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    printf("a[%d][%d]=%d  ",i,j,a[i][j]);
    printf("TOTAL=%d",c[i]);
        printf("\n");
}
}
************************************************

//MATRIX ADDITION

#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    system("color B4");

    printf("1st matrix \n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d",&a[i][j]);
    printf("\n2nd matrix\n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d",&b[i][j]);
//*****************************************************

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("\nThe Addition of two matrix is=\n");
    for(i=0; i<3; i++)
    {
        printf("\n");
        for(j=0; j<3; j++)
            printf("%d ",c[i][j]);
    }
    printf("\n");
}
**************************************************
//MATRIX ADDITION
UNLIMITED


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
**************************************************
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
*****************************************************



//matrix multiplication

#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5],i,j,k,sum=0,m,n,o,p;

    printf("\nEnter row and column of first matrix");
    scanf("%d %d",&m,&n);
    printf("\nEnter row and column of second matrix");
    scanf("%d %d",&o,&p);

    if(n!=o)
    {
        printf("Matrix mutiplication is not possible");
        printf("\nColumn of first matrix must be same as row of second matrix");
    }
    else
    {
        printf("\nEnter the First matrix->");
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                scanf("%d",&a[i][j]);
//************************
        printf("\nEnter the Second matrix->");
        for(i=0; i<o; i++)
            for(j=0; j<p; j++)
                scanf("%d",&b[i][j]);
//***************************
        printf("\nThe First matrix is\n");
        for(i=0; i<m; i++)
        {
            printf("\n");
            for(j=0; j<n; j++)
            {
                printf("%d\t",a[i][j]);
            }
        }
        printf("\nThe Second matrix is\n");
        for(i=0; i<o; i++)
        {
            printf("\n");
            for(j=0; j<p; j++)
            {
                printf("%d\t",b[i][j]);
            }
        }
//*****************************
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
//*****************************
        for(i=0; i<m; i++)
            for(j=0; j<p; j++)
                c[i][j]=0;
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
    }
//*******************************
    printf("\nThe multiplication of two matrix is\n");
    for(i=0; i<m; i++)
    {
        printf("\n");
        for(j=0; j<p; j++)
        {
            printf("%d\t",c[i][j]);
        }
    }
    return 0;
}
***********************************************************************************
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
for(i=0;i<m;i++)
      for(j=0;j<p;j++)
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
