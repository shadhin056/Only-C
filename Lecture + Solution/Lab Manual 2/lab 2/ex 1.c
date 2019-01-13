#include<stdio.h>
main()
{
    float F,C;
    printf("enter temperature in  farenheit=");
    scanf("%f",&F);
    C=(F-32)*5/9;
    printf("Celcius=%.2f",C);

}
