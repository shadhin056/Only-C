//ARRY WITH POWER


#include<stdio.h>
main()
{
    int sum=0,m,i;
    int a[5];
    printf("Enter the base number :");
    scanf("%d",&m);
    for(i=0;i<5;i++)
    {
        printf("enter a[%d]=",i);
        scanf("%d",&a[i]);
    }
      for(i=0;i<5;i++)
    {
        sum=pow(m,a[i]);
         printf("ANS=%d\n",sum);
    }

}
