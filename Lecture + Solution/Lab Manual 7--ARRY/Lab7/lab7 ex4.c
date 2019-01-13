#include<stdio.h>
int main()
{
    int F3,F1,F2,n;
    scanf("%d",&n);
        F1=0;
        F2=1;
    printf(" %d %d ",F1,F2);
        F3=F1+F2;
    while(F3<=n)
        {
    F3=F1+F2;
    printf(" %d ",F3);
    F1=F2;
    F2=F3;
        }
   return 0;
}
