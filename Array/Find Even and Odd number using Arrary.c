//EVEN ARRY and odd


#include<stdio.h>
main()
{
    int a[100];
    int n,i,j;
    printf("ENTER how many NUMBER=");
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
            printf("even number :%d\n",a[j]);
        }
        else
            printf("odd number :%d\n",a[j]);
    }

    return 0;
}



