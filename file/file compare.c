#include<stdio.h>
int main()
{
    FILE *p,*q;
    int a,b;
    p=fopen("1.txt","r");
    q=fopen("2.txt","r");

    while(fscanf(p,"%d",&a)!=EOF)
    {
        fscanf(q,"%d",&b);
        if(a!=b)
        {
            printf("Wrong ans\n");
            return 0;
        }
    }
    printf("Accepted\n");
    fclose(p);
    fclose(q);
    return 0;
}
