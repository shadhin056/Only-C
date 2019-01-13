//PAGE 36 (scanf)

#include<stdio.h>
main()
{
    int grade;
    printf("enter grade= ");
    scanf("%d",&grade);

    switch (grade)
    {
	  case 4:  printf("Excellent\n");
	  case 3:  printf("Good\n");
	  case 2:  printf("Average\n");
	  case 1:  printf("Poor\n");
	  case 0:  printf("Failing\n");
	  default: printf("Illegal grade\n");
    }
}
