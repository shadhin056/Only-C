#include<stdio.h>
int main()
{
    int s_num,n,t1,t2,final,atd,ct1,ct2,ct3,max,mid,act,total;
    printf("How many student");
    scanf("%d",&s_num);
    if(s_num<100)
    {
        for(n=1;n<=s_num;n++)
        {
        printf("input");
        scanf("%d%d%d%d%d%d%d",&t1,&t2,&final,&atd,&ct1,&ct2,&ct3);
        if(ct1>=ct2&&ct2>=ct3)
        {
            max=ct1;
            mid=ct2;
        }
        else if(ct1>=ct2&&ct3>=ct2)
        {
            max=ct1;
            mid=ct3;
        }
        else if(ct2>=ct1&&ct1>=ct3)
        {
            max=ct2;
            mid=ct1;
        }
        else if(ct2>=ct1&&ct3>=ct1)
        {
            max=ct2;
            mid=ct3;
        }
        else if(ct3>=ct1&&ct1>=ct2)
        {
            max=ct3;
            mid=ct1;
        }
        else
        {
            max=ct3;
            mid=ct2;
        }
        act=(max+mid)/2;
        total=t1+t2+final+atd+act;
        printf("case %d: ",n);
        if(total<=100&&total>=90)
        printf("A\n");
        else if(total>=80&&total<=89)
        printf("B\n");
        else if(total>=70&&total<=79)
        printf("C\n");
        else if(total>=60&&total<=69)
        printf("D\n");
        else
        printf("F\n");
        }
    }
    return 0;

}

