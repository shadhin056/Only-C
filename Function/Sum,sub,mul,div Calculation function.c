#include<stdio.h>
double sum (double a[],double in);
double sub (double a[],double in);
double mul (double a[],double in);
double div (double a[],double in);

int main ()
{
    int i,in;
    double a[100],z;

   printf("Enter The Range: ");
   scanf("%d",&in);

    for(i=0; i<in; i++)
    {
        scanf("%lf",&a[i]);
    }
 sum (a,in);
 sub (a,in);
 mul (a,in);
 div (a,in);
    return 0;
}
//.......................................
double sum (double a[],double in)
{
    int i;
    double result = 0;
    for(i=0; i<in; i++)
    {
         result= result +a[i];
    }
       printf("SUM = %.2lf\n",result);

    return result;
}
//........................................
double sub (double a[],double in)
{
    int i;
    double result = a[0];
    for(i=1; i<in; i++)
    {
        result= result-a[i];
    }
        printf("SUB = %.2lf\n",result);
    return result;
}
//........................................
double mul (double a[],double in)
{
    int i;
    double result = 1;
    for(i=0; i<in; i++)
    {
        result= result*a[i];
    }
        printf("MUL = %.2lf\n",result);
return result;
}
//........................................
double div (double a[],double in)
{
    int i;
    double result = a[0];
    for(i=1; i<in; i++)
    {
        result= result/a[i];
    }
    printf("DIV = %.2lf\n",result);
    return result;
}
