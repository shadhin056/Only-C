//ARRAY MAX to MINI

#include<stdio.h>
main()
{
    int a[100],i,j,n,temp=0,sum=0;
    printf("\"enter N=\"");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }

}
