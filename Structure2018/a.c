#include <stdio.h>
#include <string.h>
typedef struct {
    char first[20];
    char last[20];
}nametype;

typedef struct {
    int id;
    char grade[3];
    nametype name;
}studenttype;

void calculate_grade (studenttype * s,int mark){
    if(mark>=80){
        strcpy(s->grade,"A+");
    } else if (mark>=70){
        strcpy(s->grade,"A");
    } else if(mark>=60){
        strcpy(s->grade,"A-");
    }else if(mark>=50){
        strcpy(s->grade,"B");
    } else{
        strcpy(s->grade,"Fail");
    }
}
int main() {
    studenttype student[5];
    int i,n=2;
    int marks[]={72,82,60,20,50};
    for(int i=0;i<n;i++){
        printf("Enter the ID of %d ",i+1);
        scanf("%d",&student[i].id);

        printf("Enter the First name of %d ",i+1);
        scanf("%s",&student[i].name.first);

        printf("Enter the Last name of %d ",i+1);
        scanf("%s",&student[i].name.last);

        strcpy(student[i].grade,"");
        printf("\n");
    }
    for(int i=0;i<n;i++){
        calculate_grade(&student[i],marks[i]);
    }
    printf("Output : \n \n");
    for(int i=0;i<n;i++){
        printf("student %d name %s %s got %s \n",i+1,student[i].name.first,student[i].name.last,student[i].grade);
    }
    return 0;
}
