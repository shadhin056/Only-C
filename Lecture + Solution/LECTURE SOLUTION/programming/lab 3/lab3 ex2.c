#include<stdio.h>
#include<math.h>
int main()
{
    int grade_number;
    printf("Enter The Number\n");
    scanf("%d",&grade_number);
    if(grade_number>=60)
        printf("\nPassed\n");
    else
        printf("\nFailed\n");
    return 0;
}

