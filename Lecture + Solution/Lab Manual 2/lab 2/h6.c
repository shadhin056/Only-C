#include<stdio.h>
int main()
{
    float x,f;
    printf("Enter the value of X=");
    scanf("%f",&x);

    f=(x*x*x-2*x*x+x-6.3)/(x*x+0.05*x+3.14);
    printf("The value of the function is=%f",f);
    return 0;
}
