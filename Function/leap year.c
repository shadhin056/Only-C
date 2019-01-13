#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    while(scanf("%d",&year)!=EOF)
    {

        if(year%4 == 0)
        {
            if( year%100 == 0) /* Checking for a century year */
            {
                if ( year%400 == 0)
                    printf("This is a leap year.\n");
                else
                    printf("This is an ordinary year.\n");
            }
            else
                printf("This is a leap year.\n");
        }
        else
        {
            printf("This is an ordinary year.\n", year);
        }
                printf("\nEnter a year: ");

    }
    return 0;
}
