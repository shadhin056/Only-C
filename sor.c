#include<stdio.h>
#include<string.h>
struct cse12
{
    char name [20];
    int sid;
    double cgpa;
};
void input(struct cse12 student[])
{
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%s %d %lf",student[i].name,&student[i].sid,&student[i].cgpa);
    }
}
void output(struct cse12 student[])
{
    int i;
    printf("----------OUTPUT --------");
    for(i=0;i<5;i++)
    {
        printf("%s%d%lf",student[i].name,student[i].sid,student[i].cgpa);
    }
}
void  namesort(struct cse12 student[])
{
    int i,j;
    for(i=0;i<9;i++)
    {
        for(j=i+1;i<10;j++)
        {
            if(strcmp(student[i].name,student[j].name)>0)
            {
                struct cse12 temp;
                strcpy (temp.name,student[i].name);
                temp.sid=student[i].sid;
                temp.cgpa=student[i].cgpa;


                strcpy (student[i].name,student[j].name);
                student[i].sid=student[j].sid;
                student[i].cgpa=student[j].cgpa;

                strcpy (student[j].name,temp.name);
                student[j].sid=temp.sid;
                student[j].cgpa=temp.cgpa;

            }
        }
    }
}


int main()
{
    struct cse12 student[10];
    input(student);
    output(student);
    namesort(student);
    output(student);

    return 0;

}
