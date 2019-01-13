//1.2.3+2.3.4+3.4.5+........n

#include<stdio.h>
int main()

{
    int n,i,sum=0;
    printf("enter number= ");
    scanf("%d",&n);

    for(i=1;i<=n;i=i++)
         sum=sum+(i+1)*i*(i+2);
    {
    printf("\n%d\n",sum);
    }

}
