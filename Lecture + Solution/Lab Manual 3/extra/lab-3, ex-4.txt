#include<stdio.h>
int main()
{
    int year;
    printf("Enter a Year = ");
    scanf("%d",&year);
    if (year%100==0)
    {
        if (year%400==0)
            printf("it is a leap year");
        else
            printf("it is a not leap year");
    }
    else
    {
        if (year%4==0)
            printf("it is a leap year");
        else
            printf("it is a not leap year");
    }
 getch();
 return 0;
}
