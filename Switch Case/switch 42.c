//page 42
#include<stdio.h>
main()
{
    int grade;
    scanf("%d",&grade);
    switch (grade)
    {
	  case 4:
	  case 3:
	  case 2:
	  case 1:  printf("\npassing\n");
	           break;
	  case 0:  printf("\nFailing\n");
	           break;
	  default: printf("\nIllegal grade\n");
	           break;
    }
}
