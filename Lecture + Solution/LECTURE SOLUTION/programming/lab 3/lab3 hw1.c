#include<stdio.h>
int main()
{
    float N,cost;
    printf("Enter N\n");
    scanf("%f",&N);
    if(N<=50)
    {
        printf("Cost is $100",cost);
    }
    else if(50<N&&N<=100)
    {
        cost=10+(0.02*N);
        printf("Cost is $%f",cost);
    }
    else
    {
        printf("Cost is $300");
    }
    return 0;
}


