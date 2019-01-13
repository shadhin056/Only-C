#include<stdio.h>
int main()
{
    int y;
    printf("Enter your year\n");
    scanf("%d",&y);
    if(((y%4)==0)&&((y%100)!=0)||((y%400)==0))
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not Leap Year\n");
    }
    return 0;
}
/*,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
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
*/
