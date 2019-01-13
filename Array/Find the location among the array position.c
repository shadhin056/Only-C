//FIND THE LOCATION

#include<stdio.h>
int main()
{
    int a[5],i,s,n,q;
    for(i=0;i<5;i++)
    {
       printf("enter a[%d]=",i);
       scanf ("%d",&a[i]);
    }

    printf("SEARCH= ");
    scanf("%d",&s);
    for(i=0;i<5;i++)
    {
        if(s==a[i])
        {
            q++;
            break;
        }
    }
if(q==0)
    {
        printf("\nValue Is Not Found\n");
    }
    else
    {
        printf("\nLOCATION a[%d]\n\n",i);
    }
    return 0;
}
