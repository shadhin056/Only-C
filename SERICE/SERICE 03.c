//1.2+3.4+5.6+............n


#include<stdio.h>
int main()

{
    int n,i,sum=0;
    printf("enter number= ");
    scanf("%d",&n);

    for(i=2;i<=n;i=i+2)
         sum=sum+(i-1)*i;
    {
    printf("\n%d\n",sum);
    }

}
