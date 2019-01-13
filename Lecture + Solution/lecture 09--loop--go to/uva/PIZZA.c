#include<stdio.h>
main()
{
    int sum=1,i,n;

    printf("ENTER NUMBER=");
    scanf("%d",&n);

while(n==1)
{
if(0<=n && n<=10000)
        {
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
        }
}
    printf("%d",sum);

}
