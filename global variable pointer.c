///#include<stdio.h>
///int m,n,o,p;
///void abc(int a,int b)
///{
///    m=a+b;
///    n=a-b;
///    o=a*b;
///    p=a/b;
///}
//using pointer
void abc(int a,int b,int *sum,int *sub,int *mul,int *div)
{
    *sum=a+b;
    *sub=a-b;
    *mul=a*b;
   * div=a/b;
}
int main()
{
    int sum,sub,mul,div;
    int a,b;

    a=5;
    b=1;
    abc(a,b,&sum,&sub,&mul,&div);
//    sum=m;
//    sub=n;
//    mul=o;
//    div=p;
    printf("%d\n",sum);
    printf("%d\n",sub);
    printf("%d\n",mul);
    printf("%d\n",div);
    return 0;
}
