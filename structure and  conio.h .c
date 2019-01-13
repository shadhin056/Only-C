#include<stdio.h>
struct creat_account
{
    char first_name[50];
    char last_name[50];
    char username[50];
    char password[51];
    struct birthday
    {
        int day;
        int month;
        int year;
    }birth;
    struct Sex
    {
        int male;
        int female;
    }sex;
};
void pass_gen(char pass[])
{
    int i=0;
    char ch;
    while(1)
    {
        ch=getch();
        if(ch==13)
        {
            break;
        }
        else
        putchar('*');
            pass[i++]=ch;
    }
    pass[i]='\0';
}
int main()
{
    char passck[20];
    char sexck[10];
    struct creat_account user;
    printf("ENter First Name :   ");
    scanf("%s",user.first_name);
    printf("ENter Last Name  :   ");
scanf("%s",user.last_name);

    printf("ENter your User Name  :   ");
    scanf("%s",user.username);
z:
    printf("ENter your pasword :   ");
    pass_gen(user.password);

    printf("\nENter repeat your password  : ");
    pass_gen(passck);
    if(strcmp(user.password,passck)!=0)
    {
        printf("\nDon't Match\n");
        goto z;
    }
    printf("\nENter Your Birth info :  ");
    printf("\n\t DAY  :  ");
     scanf("%d",&user.birth.day);
    printf("\t MONTH  :  ");
    scanf("%d",&user.birth.month);

    printf("\t Year  :  ");
    scanf("%d",&user.birth.year);

    y:
    printf("Enter Your Sex ; m/M=Male F=Female :  \n");
    scanf("%s",sexck);
    if(strcmp(sexck,"M")==0||strcmp(sexck,"m")==0)
        {
            user.sex.male=1;
            user.sex.female=0;
        }
    else if(strcmp(sexck,"F")==0||strcmp(sexck,"f")==0)
    {
            user.sex.male=0;
            user.sex.female=1;
    }
    else
    {
        printf("\nYou have dial Wrong keyword\n");

        goto y;
        return 0;
    }
    printf(" \nYOUR information is HERE \n");
printf("FIRST name:%s\n",user.first_name);
printf("Last name:%s\n",user.last_name);
printf("User name:%s\n",user.username);
printf("password:%s\n",user.password);


printf("User birthday:%d\n",user.birth.day);
printf("User birthmonth:%d\n",user.birth.month);
printf("User birthyear%d\n",user.birth.year);
printf("SEX : ");

if(user.sex.male==1)
{
    printf("Male\n");
}
else
{
    printf("Female\n");
}
return 0;
}
