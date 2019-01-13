#include<stdio.h>
#include<string.h>
struct cse12
{
    char name[20];
    int sid;
    double cgpa ;

} student[10];
void print(struct cse12 student[])
{
    int i;
    for(i=0; i<10; i++)
    {

        printf("student name :%s\n",student[i].name);
        printf("student ID :%d\n",student[i].sid);
        printf("student CGPA :%lf\n",student[i].cgpa);

    }
}

int main()
{
    int i;
    //struct cse12 ;
    for(i=0; i<10; i++)
    {
        scanf("%s\n",student[i].name);
        scanf("%d\n",&student[i].sid);
        scanf("%lf\n",&student[i].cgpa);
    }
    print(student);
    return 0;
}
