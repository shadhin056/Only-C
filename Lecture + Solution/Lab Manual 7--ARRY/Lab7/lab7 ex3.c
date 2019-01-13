#include<stdio.h>
int main()
{
    int a[10],i;
    for(i=0;i<10;i++)
    {
        a[i]=i;
        if(a[i]%2==0){
            a[i]=3*a[i];}
            printf("%d ",a[i]);
    }
    return 0;
}
