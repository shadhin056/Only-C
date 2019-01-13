#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
    int data;
    node* link;
};
node* head;
void add(int n)
{
    struct node* temp=new node();
    temp->data=n;
    temp->link=head;
    head=temp;

}
void display()
{
    node *current;
//     cout<<head->data;
    current =head;
    while(current!=NULL)
    {
        cout<<current->data<< " ";
        current=current->link;
    }
    cout<<endl;

}
int main()
{

    int n;
    head =NULL;
        printf("ADD the number=");
        scanf("%d",&n);
        add(n);
    display();
}
