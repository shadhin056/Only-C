
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char str [100]="sharif";
    char str2[100];

    // fp = fopen ("Newfile.txt","w");
    fp = fopen ("Newfile.txt","r");

    //fputs(str,fp);
    fgets(str2,3,fp);
    printf("%s",str2);
    fclose(fp);


    return 0;
}
