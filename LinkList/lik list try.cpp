#include<stdio.h>
#include<iostream>
using namespace std;

struct node {
int data;
struct node* next;

};
struct node* head;//global variable,can be accessed anywhere
void Insert(int x)
{
   node* temp =new node();
    temp->data=x;
    temp->next=head;
    head =temp;
}
void print()
{
    struct node* temp = head;
    printf("List is: ");
    while (temp != NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
head=NULL;//  empty list
printf("HOW many number ?\n");
int n,i,x;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("enter the number \n");
    scanf("%d",&x);
}
Insert(x);
print();

    }
