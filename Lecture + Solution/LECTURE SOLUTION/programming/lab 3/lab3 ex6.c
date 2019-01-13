#include<stdio.h>
#include<math.h>
int main()
{
    float r,pie=3.1416,side,area,area1;
    printf("Please Enter The Radius :");
    scanf("%f",&r);
    area=pie*r*r;
    if(area<100)
    {
        printf("The Circle Is Too Small To Hold A Quadrate");
    }
    else
    {
        side=(2*r)/sqrt(2);
        area1=side*side;
        printf("Your Circle Is Big Enough To Hold A Quadrate & The Area of The Quadrate is %f",area1);
        return 0;

    }
}

