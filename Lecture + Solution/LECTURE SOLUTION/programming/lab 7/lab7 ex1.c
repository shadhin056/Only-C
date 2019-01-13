#include<stdio.h>
int main()
{
    float express[13];
    int count;
    for(count=1;count<13;count++)
    {
        printf("Enter expepses for month %d: ",count);
        scanf("%f",&express[count]);
    }
    for(count=1;count<13;count++)
    {
        printf("Month %d = $%2f\n",count,express[count]);
    }
    return 0;
}
