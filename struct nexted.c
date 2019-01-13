#include<stdio.h>
struct birthday
    {
        int day;
        int month;
        int year;
    };
      struct Sex
    {
        int male;
        int female;
    };

struct student
{
    char first_name[50];
    char last_name[50];
    struct birthday birth;
    struct Sex sex ;

};
struct teacher
{
    char first_name[50];
    char last_name[50];
    char birthday birth;
    char Sex sex;
    int salary;


};

int main()
{
    struct student user;
    printf("ENter First Name :   ");
    scanf("%s",user.first_name);
    printf("ENter Last Name  :   ");
    scanf("%s",user.last_name);


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
