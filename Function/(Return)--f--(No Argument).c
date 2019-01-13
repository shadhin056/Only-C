//(Return)--f--(No Argument)
#include<stdio.h>
int sum()
{
    int a,b,z;
    printf("Enter number");
    scanf("%d%d",&a,&b);
    z=a+b;
    return z;
}


int main()
{ int b;
b=sum();
    printf("%d",b);
    return 0;
}
