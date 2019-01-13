
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char str [100]="sharif";
    char str2[100];

    fp = fopen ("Newfile.txt","r");
    str2[0]=getc(fp);
    //putc (str[0],fp);
    putchar (str[0]);
    fclose(fp);

    return 0;
}
