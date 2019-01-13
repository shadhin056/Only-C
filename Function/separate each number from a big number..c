#include<stdio.h>
find(int n)
{   int k;
    for(;n!=0;n=n/10)
    {
        k=n%10;
        printf("%d\n",k);
    }
}
main()
{
    int n;
    scanf("%d",&n);
    int c =find(n);

}
