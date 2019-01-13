#include<stdio.h>

int main()
{
    int a,b,Quotient,Remainder;
    printf("Enter your numbers: \n");
    scanf("%d%d",&a,&b);
	if (b==0)
	{
        printf("\n\nError!! can't divide\n\n");
	}
	else
	{
		Quotient=a/b;
		Remainder=a%b;
        printf("\n\nQ= %d\n\nR=%d",Quotient,Remainder);
	}
	
	return 0;
}
