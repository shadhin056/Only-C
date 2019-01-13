
//fibonacci serice : 0,1,1,2,3,5,8,13,21,34,55,89,144,
#include<stdio.h>
int fib (int n);
int main ()
{
    int n,fi;

    printf("Enter number: ");
    scanf("%d",&n);

    fi=fib(n);
    printf("The Fibonacchi of %d= %d",n,fi);
    return 0;
}

int fib (int n)
{
    int a[100];
    a[0]=0,a[1]=1;

    int i,sum=0;

    if(n==0) return 0;
    if(n==1) return 1;

    for(i=2;i<=n;i++)
    {
        sum= a[i-1]+a[i-2];
        a[i]=sum;
    }
    return sum;
}

