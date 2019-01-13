//stick pop and push

#include<iostream>
#include<cstdio>
#include<cctype>
#include<cstdlib>

using namespace std;


struct node
{
    int data;
    node* link;
};

node* head;
void add(int n)
{

    struct node* temp = new node();
    temp->data=n;
    temp->link=head;
    head=temp;
}

int top()
{
    if (head==NULL)
    {
        cout<<"HEAD is NULL ";
        return 0;
    }
    else
    {
        return head->data;
    }

}
int pop()
{
    if(head==NULL)
    {

        printf(" \n EMpty\n");
        //return;
    }
    else
    {

        node* old_head=head;
        head=head->link;
        int a=old_head->data;

        free(old_head);
        old_head=NULL;

        return a;
    }
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
    head =NULL;
    int n;
    //scanf("%d",&n);
    add(1);
    add(2);
    add(3);
    add(4);
    //display();

    int o;
    if (head!=NULL)
    {
        o=top();
        cout<<o<<endl;
    }
    else
    {
        printf("\nhead is  NULL");
    }

    if (head!=NULL)
    {
        o=pop();
        cout<<o<<endl;
    }
    else
    {
        printf("\nhead is  NULL");
    }


    if (head!=NULL)
    {
        o=pop();
        cout<<o<<endl;
    }
    else
    {
        printf("\nhead is  NULL");
    }

    if (head!=NULL)
    {
        o=pop();
        cout<<o<<endl;
    }
    else
    {
        printf("\nhead is  NULL");
    }

    if (head!=NULL)
    {
        o=pop();
        cout<<o<<endl;
    }
    else
    {
        printf("\nhead is  NULL");
    }

    if (head!=NULL)
    {
        o=pop();
        cout<<o<<endl;
    }
    else
    {
        printf("\nhead is  NULL");
    }
if (head!=NULL)
    {
        o=pop();
        cout<<o<<endl;
    }
    else
    {
        printf("\nhead is  NULL");
    }
if (head!=NULL)
    {
        o=pop();
        cout<<o<<endl;
    }
    else
    {
        printf("\nhead is  NULL");
    }



}
