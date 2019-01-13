#include<stdio.h>
#include<stdlib.h>
struct my{
    int a;
    struct my *next;

};
void print(struct my *ptr)
{
//    if(ptr==NULL)
//    {
//        printf("NULL\n");
//        return ;
//
//    }
//     printf("%d\n",ptr->a);
//    print(a->next);
//    while(ptr!=NULL)
//    {
//    printf("%d\n",ptr->a);
//    ptr=ptr->next;
//
//    }
while(1)
    {
        if(ptr==NULL){

            printf("NULL\n");
            break;
        }
    printf("%d\n",ptr->a);
    ptr=ptr->next;

    }
}
int main()
{
    struct my a,b,c,d,e;
    a.a =5;
//    a.next=NULL;
    a.next=&b;
    b.a=6;
    b.next=NULL;
    print (&a);
    //print (a.next);
    return 0;
}
