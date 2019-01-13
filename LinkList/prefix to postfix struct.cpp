#include<stdio.h>
#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;

struct node
{

    int data;
    node* next;

};
struct node* head;

void push(int n)
{

    struct node* temp=new node();
    temp->data = n;
    temp->next = head;
    head=temp;


}
void pop()
{
    if(head != NULL)
    {
        struct node* it = head;
        head = it ->next ;
        free (it);
        it=NULL;
    }
    else
    {
        cout<< "head null"<<endl;
    }
}

int top()
{
    if(head != NULL)
    {

        return head->data;
    }
    else
    {
        cout<< "head null"<<endl;
    }
}

bool isoperator(char ch)
{
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^'||ch=='%')
        return true ;
    else
        return false;
}
int caldata(char ch,int a,int b)
{
    int r;
    switch(ch)
    {
    case '+':
        r=a+b;
        break;

    case '-':
        r=a-b;
        break;

    case '*':
        r=a*b;
        break;

    case '/':
        r=a/b;
        break;

    case '^':
        r=pow(a,b);
        break;

    case '%':
        r=(a%b);
        break;
    }
    return r;

}
int main()
{
    head=NULL;
    char ch;

    while(1)
    {
        cin>>ch;
        if(ch=='#')
            break;

        if(isoperator(ch))
        {
            int a=top();
            pop();
            int b=top();
            pop();
            int r = caldata(ch,b,a);
            push(r);
        }
        else
        {
            int k = ch - '0';
            push(k);
        }
    }

    cout << top() << endl;
    return 0;
}
