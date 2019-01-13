//(No Return)--f--(Argument)
#include<stdio.h>

void sum (int a,int b)
{
    int z;
    z=a+b;
    printf("%d",z);
}

int main()
{
    int a,b;

    printf("enter number =");
    scanf("%d%d",&a,&b);

    sum(a,b);
    return 0;





}
