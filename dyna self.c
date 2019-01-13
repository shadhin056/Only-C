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
    struct my *obj_start,*obj_end,*obj;
    int n=5;
    obj_start=NULL;
    obj_end=NULL;
    obj=NULL;
while(n--)
{
    if(obj_start==obj_end && obj_start==NULL)
    {
     obj=(struct my *)malloc(sizeof(struct my));
    int x;
    scanf("%d",&x);
    obj->a=x;
    obj->next=NULL;
    obj_start = obj_end=obj;
    }
    else
    {
        obj=(struct my *)malloc(sizeof(struct my));
   int x;
    scanf("%d",&x);
    obj->a=x;
    obj->next=NULL;
    obj_end->next=obj;
    obj_end=obj;
    }

}
    //obj->next=NULL;
    print (obj_start);
    //print (a.next);
    return 0;
}
