#include<stdio.h>
#include<stdlib.h>
struct my{
char name[50];
char sid [20];
char adress[30];

};

int main()
{
    FILE *fp;
    struct my in = {"sharif","02009","DInajpur"};
struct my out;
char str[100]="sharif";
char str2[100];
fp=fopen ("111.txt","r");
//fwrite(&in,sizeof(in),1,fp );
fread(&out,sizeof(in),1,fp );
printf("%s",out.adress);

fclose(fp);
}
