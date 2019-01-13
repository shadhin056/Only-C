#include<stdio.h>
#include<string.h>
struct cse12
{
    char name[20];
    int sid;
    double cgpa ;

} student[10];
//...........................................
input(struct cse12 student[])
{
    int i;
    printf("Enter 5 student info:");
    for(i=0; i<5; i++)
    {
        scanf("%s\n",student[i].name);
        scanf("%d\n",&student[i].sid);
        scanf("%lf\n",&student[i].cgpa);
    }
}
//..........................................
void output(struct cse12 student[])
{
    int i;
    for(i=0; i<5; i++)
    {

        printf("student name :%s\n",student[i].name);
        printf("student ID :%d\n",student[i].sid);
        printf("student CGPA :%lf\n",student[i].cgpa);

    }
}
//.........................................
void namesort(struct cse12 student[])
{   int i,j;
    for(i=0;i<4;i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(strcmp(student[i].name,student[j].name)>0)
            {
                struct cse12 temp;
                strcpy(temp.name,student[i].name);
                temp.sid=student[i].sid;
                temp.cgpa=student[i].cgpa;

                strcpy(student[i].name,student[j].name);
                student[i].sid=student[j].sid;
                student[i].cgpa=student[j].cgpa;

                strcpy(student[j].name,temp.name);
                student[j].sid=temp.sid;
                student[j].cgpa=temp.cgpa;
            }
        }
    }
}
//..........................................
int main()
{
    input(student);
    output(student);
    namesort(student);
    printf("\n\nAfter sorting :");
    output(student);
    return 0;
}
