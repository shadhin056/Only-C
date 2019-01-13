#include<stdio.h>
int main()
{
    int number;
    printf("Please Enter your number:");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("The number you entered is EVEN\n");
    }
    else
    {
        printf("The number you entered is ODD\n");
    }
    return 0;
}

