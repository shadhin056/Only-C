//calculate cgpa with file

#include <stdio.h>
#include <string.h>
#include <algorithm>

#define MAX 25

struct student
{
    int id;
    char name[50];
    double point_s1;
    double point_s2;
    double point_s3;
    double point_s4;
    double point_s5;
    double point_s6;
    double point_s7;
    double point_s8;
    double point_s9;
    double point_s10;
    double cgpa;

} st[MAX];

int compare(student a, student b)
{
    if(a.cgpa==b.cgpa)
    {
        if(a.id==b.id)
        {

        }
        else return a.id<b.id;
    }
    else return a.cgpa>b.cgpa;
}

double get_cgpa(int i)
{
    double total_point = st[i].point_s1+st[i].point_s2+st[i].point_s3+st[i].point_s4+st[i].point_s5+st[i].point_s6+st[i].point_s7+st[i].point_s8+st[i].point_s9+st[i].point_s10;
    return total_point/10.0;
}

int main()
{

    freopen("std-dat.txt", "r", stdin);
    //freopen("st-sort.txt", "w", stdout);


    int i,j,k;
    int id;

    double cgpa;
    for(i=0; i<20; i++ )
    {

        scanf("%d",&st[i].id); //cout << &st[i].id << endl;
        scanf("%s",&st[i].name); //cout << &st[i].name << endl;
        scanf("%lf%lf%lf%lf%lf",&st[i].point_s1,&st[i].point_s2,&st[i].point_s3,&st[i].point_s4,&st[i].point_s5);
        scanf("%lf%lf%lf%lf%lf",&st[i].point_s6,&st[i].point_s7,&st[i].point_s8,&st[i].point_s9,&st[i].point_s10);
    }

//    for(i=0; i<20; i++ )
//    {
//        printf("%d\n",st[i].id);
//        printf("%s\n",st[i].name);
//        printf("%.1lf %.1lf %.1lf %.1lf %.1lf",st[i].point_s1,st[i].point_s2,st[i].point_s3,st[i].point_s4,st[i].point_s5);
//        printf("%.1lf %.1lf %.1lf %.1lf %.1lf\n",st[i].point_s6,st[i].point_s7,st[i].point_s8,st[i].point_s9,st[i].point_s10);
//        printf("\n\n");
//    }


    for(i=0; i<20; i++ )
    {
        st[i].cgpa=get_cgpa(i);
    }


//    for(i=0; i<20; i++ )
//    {
//        printf("ID  : %d\n",st[i].id);
//        printf("Name: %s\n",st[i].name);
//        printf("GPA : %.1lf %.1lf %.1lf %.1lf %.1lf ",st[i].point_s1,st[i].point_s2,st[i].point_s3,st[i].point_s4,st[i].point_s5);
//        printf("%.1lf %.1lf %.1lf %.1lf %.1lf\n",st[i].point_s6,st[i].point_s7,st[i].point_s8,st[i].point_s9,st[i].point_s10);
//        printf("CGPA: %.2lf \n\n",st[i].cgpa);
//    }


    sort(st,st+20,compare);

    for(i=0; i<20; i++ )
    {
        printf("ID  : %d\n",st[i].id);
        printf("Name: %s\n",st[i].name);
        printf("GPA : %.1lf %.1lf %.1lf %.1lf %.1lf ",st[i].point_s1,st[i].point_s2,st[i].point_s3,st[i].point_s4,st[i].point_s5);
        printf("%.1lf %.1lf %.1lf %.1lf %.1lf\n",st[i].point_s6,st[i].point_s7,st[i].point_s8,st[i].point_s9,st[i].point_s10);
        printf("CGPA: %.2lf \n\n",st[i].cgpa);
    }











    return 0;
}




/*

Sample Input



Sample Output



*/
