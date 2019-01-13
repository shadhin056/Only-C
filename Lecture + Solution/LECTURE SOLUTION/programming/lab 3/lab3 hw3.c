#include<stdio.h>
int main()
{
    int g;
    printf("Enter your grade :");
    scanf("%d",&g);
    g=g/10;
    switch(g)
    {
    case 10 :
    case 9 :
        printf("\nYour grade is A.");
        break;
    case 8 :
        printf("\nYour grade is B.");
        break;
    case 7 :
        printf("\nYour grade is C.");
        break;
    case 6 :
        printf("\nYour grade is D.");
        break;
    default :
        printf("\nYour grade is F.");
        break;
    }
    return 0;
}
