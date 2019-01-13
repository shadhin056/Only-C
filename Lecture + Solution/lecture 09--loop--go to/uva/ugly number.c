#include<stdio.h>
int main()
{
    int i, j,  count = 0;
    int b[1500];

    for(i = 1; count < 1500; i++)
    {
        j = i;
        while(j % 2 == 0)
        {
            j = j / 2;
        }
        while(j % 3 == 0)
        {
            j = j /3;
        }
        while(j % 5 == 0)
        {
            j = j / 5;
        }
        if(j == 1)
        {
            b[count] = i;
            count++;
        }
    }
    printf("1500th ugly number is %d", b[1500-1]);

    return 0;
}
