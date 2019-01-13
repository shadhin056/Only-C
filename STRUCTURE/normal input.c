#include<stdio.h>
#include<string.h>
struct cse12
{
    char name[20];
    int sid;
    double cgpa ;

}student;


int main()
{
   // struct cse12 student ;
    strcpy(student.name,"sharif");
    student.sid=1;
    student.cgpa=3.00;

    printf("student name :%s\n",student.name);
    printf("student ID :%d\n",student.sid);
    printf("student CGPA :%lf\n",student.cgpa);





    return 0;
}
