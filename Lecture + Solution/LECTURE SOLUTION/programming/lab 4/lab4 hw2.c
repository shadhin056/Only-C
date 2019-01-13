#include<stdio.h>
int main()
{
    int n,i,j,k=1;
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            printf("%d ",k);
            k++;
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
