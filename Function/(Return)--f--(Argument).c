//(Return)--f--(Argument)......................
#include<stdio.h>

float sum (int x,int y)
{
    int z;
    z=x+y;
    return z;
}

int main()
{
    int x,y;
    float c;

    printf("ENter number=");
    scanf("%d%d",&x,&y);
 c=sum(x,y);

   printf("%f",c);
   return 0;


}
