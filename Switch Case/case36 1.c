#include<stdio.h>
main()
{
    int grade,i=1,n;
    printf("enter number=");
    scanf("%d",&n);
    while(n>i)
        {
    scanf("%d",&grade);

    if (grade == 4)
        printf("Excellent\n");
    else if (grade == 3)
        printf("Good\n");
    else if (grade == 2)
        printf("Average\n");
    else if (grade == 1)
        printf("Poor\n");
    else if (grade == 0)
        printf("Failing\n");
    else
        printf("Illegal grade\n");
        i++;
     }
}
