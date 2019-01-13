
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("Nex.txt","a");
    fprintf(fp,"THis is my friend");
    fclose(fp);
    return 0;
}
