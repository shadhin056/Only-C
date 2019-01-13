#include<stdio.h>
int main()
{
    float a,b,x,y,dist,rad,area;

    printf("Enter   First Point a,b = ");
    scanf("%f %f",&a,&b);

    printf("Enter Another Point x,y = ");
    scanf("%f %f",&x,&y);

    dist = sqrt((a-x)*(a-x)+(b-y)*(b-y));
    rad = dist/2;
    area = 3.1416*rad*rad;
    printf("Area of the Circle is = %.2f",area);
    getch();
    return 0;

}

