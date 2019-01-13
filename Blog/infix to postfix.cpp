#include<stdio.h>
#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;

struct node
{

    char data;
    node* next;

};
struct node* head;

void push(char n)
{
    struct node* temp=new node();
    temp->data = n;
    temp->next = head;
    head=temp;
}
void pop()
{
    if(head!= NULL)
    {
        struct node* it = head;
        head = it ->next ;
        free (it);
        it=NULL;
    }
    else
    {
        cout<<"head is null"<<endl;
    }
}
int top()
{
    if(head!=NULL)
    {
        return head->data;
    }
    else
    {
        cout<<"head is null"<<endl;
    }
}
bool isoperator(char ch)
{
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^'||ch=='%')
        return true ;
    else
        return false;
}

int infixtopostfix(char* st,int l)
{
    for(int i=0; i<l; i++)
    {
        char ch=st[i];
        if(ch==')')
        {
            char a=top();
            cout<<a<<endl;
            pop();
            pop();
        }
        else if (ch=='('||isoperator(ch))
        {
            push(ch);
        }
        else

            cout<<ch<<" ";
    }
}



int main()
{
    head=NULL;
    char ch;
    char st[100];
    int i=0;

    while(1)
    {
        cin >> ch;
        if(ch=='#')
            break;

        st[i++]=ch;
    }
    st[i]='\0';
    int l=strlen(st);

    infixtopostfix(st,l);
    return 0;
}


