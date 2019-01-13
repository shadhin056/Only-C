#include<stdio.h>
main()
{
    int a[10],i,j,max=-1000,min=1000;
    for(i=0;i<10;i++)
    {
       printf("enter[%d]=",i);
       scanf ("%d",&a[i]);
    }
    for(j=0;j<10;j++)
    {
        if(a[j]>max)
        {
            max=a[j];
        }
    }
     for(j=0;j<10;j++)
    {
        if(a[j]<min)
        {
            min=a[j];
        }
    }
printf ("\nmaximum= %d\n\nminimun=%d\n",max,min);
return 0;
}
