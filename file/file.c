
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("Nex.txt","w");
    fprintf(fp,"THis is my friend\n");
    fclose(fp);
    return 0;
}
