
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int n;
    fp = fopen("Nex.txt","w");
    scanf("%d",&n);
    fprintf(fp,"\n%d\n",n);
    fclose(fp);

    fp = fopen("Nex.txt","r");
    fscanf(fp,"%d",&n);
    printf("%d\n",n);
    fclose(fp);


    return 0;
}
