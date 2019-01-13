#include<stdio.h>
int main()
{
    int score;
    printf("Enter your score:");
    scanf("%d",&score);
    if(score>=0 && score<=100)
    {
        if(score>=90)
        {
            printf("grade is A.\n");
        }
        else if(score>=80)
        {
            printf("grade is B.\n");
        }
        else if(score>=70)
        {
            printf("grade is C.\n");
        }
        else if(score>=60)
        {
            printf("grade is D.\n");
        }
        else
        {
            printf("grade is F.\n");
        }
    }
    else
        {
            printf("Invalid input.\n");
        }
        return 0;
}

