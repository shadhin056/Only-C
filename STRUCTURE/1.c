#include<stdio.h>
#include<string.h>
struct sha
{
    int a;
    float b;
    char c[10];
};
int main()
{
    struct sha v[10];
    int i;

    for(i=0;i<3;i++)
    {
        printf("Enter name :");
        scanf("%s",&v[i].c);
    }
    for (i=0;i<3;i++)
    {
        printf(" Roll : \n");
        scanf("%d",&v[i].a);
    }
    for(i=0;i<3;i++)
    {
        printf("CGPA:\n");
        scanf("%f",&v[i].b);
    }

//*****************************
for(i=0;i<3;i++)
    {
        printf("%s\n",v[i].c);
    }
 for (i=0;i<3;i++)
    {
        printf("  %d\n",v[i].a);
    }
    for(i=0;i<3;i++)
    {
        printf("  %f\n",v[i].b);
    }

}
