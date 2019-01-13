//SUMMATION ARRY


#include<stdio.h>
main()
{
    int a[100];
    int n,i,j,sum=0;
printf("ENTER NUMBER=");
scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

     for(j=0;j<n;j++)
    {

        sum=sum+a[j];
    }
    printf("%d",sum);
}
//**********************************
/*
#include<stdio.h>
int main()
{
   int a[10],i,j,n=0;
   for(i=0;i<5;i++)
     {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        n=n+a[i];
     }
     printf("\n%d\n",n);
  return 0;
}
*/
