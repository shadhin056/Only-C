#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float pie=3.1416;
    double s,t_area,b_radious,s_radious,sunflower,violet,rose;
    scanf("%d%d%d",&a,&b,&c);
    if(0<a&&a<=b&&b<=c&&c<=1000)
    {
        s=(double)(a+b+c)/2.0;
        t_area=sqrt((s*(s-a)*(s-b)*(s-c)));
        b_radious=(double)(a*b*c)/(double)(t_area*4.0);
        s_radious=t_area/(double)s;
        rose=pie*(s_radious*s_radious);
        violet=t_area-rose;
        sunflower=((pie*(b_radious*b_radious))-t_area);
        printf("%f  %f  %f",sunflower,violet,rose);
    }
    return 0;
}
