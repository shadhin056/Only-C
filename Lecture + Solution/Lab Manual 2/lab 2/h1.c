#include<stdio.h>
int main()
{
    int hour,tsec,min,p,sec;

    printf("Total Second=");
    scanf("%d",&tsec);

    hour = tsec/3600;
    printf("HOUR=%d \n",hour);

    p=tsec%3600;
    min=p/60;

    printf("MIN=%d \n",min);

    sec=p%60;
    printf("SEC=%d \n",sec);
    return 0;
}
