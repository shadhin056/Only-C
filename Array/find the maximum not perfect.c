//maximum

#include<stdio.h>
main()
{
    int a[10],i,j,max=-100;
    printf("enter 10 number :\n");
    for(i=0;i<10;i++)
    {
       printf("enter a[%d]=",i);
       scanf ("%d",&a[i]);

    }
    for(i=0;i<10;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
printf ("maximum %d\n",max);
return 0;

}
