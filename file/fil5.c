
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp,*fp1,*fp2;
    char ch[100];
    fp=fopen("file1.txt","w");
    scanf("%s",ch);
    fprintf(fp,"%s",ch);
    fclose(fp);
//.......................
     fp1 = fopen("file11.txt","r");
     if(fp1==NULL)
     {
         printf("File not found");
     }
     fp2 = fopen("file2.txt","w");
     fscanf(fp1,"%s",ch);
     fprintf(fp2,"%s",ch);

fclose(fp1);
fclose(fp2);

}
