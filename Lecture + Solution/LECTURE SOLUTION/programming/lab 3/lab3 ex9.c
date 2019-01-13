#include<stdio.h>
int main()
{
    int Ah,Am,As,Bh,Bm,Bs,A,B;
    printf("Entr value for A Hour,Minute,Second\n");
    scanf("%d%d%d",&Ah,&Am,&As);
    printf("Entr value for B Hour,Minute,Second\n");
    scanf("%d%d%d",&Bh,&Bm,&Bs);
    A=(Ah*3600)+(Am*60)+As;
    B=(Bh*3600)+(Bm*60)+Bs;
    if(A==B)
    {
        printf("Both Takes Same Time\n");
    }
    else
    {
        if(A>B)
         {
            printf("A Takes More Times\n");
         }
         else
         {
            printf("B Takes More Times\n");
         }
    }
    return 0;
}


