//EVEN ARRAY

#include<stdio.h>
main()
{
    int a[100];
    int n,i,j;
    printf("ENTER NUMBER=");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(j=0; j<n; j++)
    {
        if(a[j]%2==0)
        {
            printf("EVEN NUMER =%d\n",a[j]);
        }
        else
        {
            printf("ODD NUMER =%d\n",a[j]);
        }

    }
}
