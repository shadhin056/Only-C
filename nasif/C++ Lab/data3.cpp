//STL in c
//stlc - queue (global head and tail)
//push,pop,top,is_empty
//working fine
//xplo

#include<cstdio>
#include<iostream>
#include<cstdlib>
#include <cstring>
#include <cstdlib>
#include <conio.h>

#define max 100

using namespace std;


struct Node
{
    int data;
    Node* next;

};

Node* head;
Node* tail;

/*--------------- Prototype -----------------*/

void push(int n);
int pop();
int top();
bool isEmpty();
void print();


/*------------------------------------------*/


int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    head = NULL;
    tail = NULL;

    int n,pos;

    push(1);
    push(2);
    push(3);
    push(4);
    print();

    //cout << top() << endl;

    cout << pop() << endl;
    //pop();
    //print();

    //cout << isEmpty() << endl;

//    push(10);
//    cout << isEmpty() << endl;

    return 0;
}



void push(int n)
{
//     old style
//    Node* temp = (Node*)malloc(sizeof(Node));
//    (*temp).a = 2;
//    (*temp).next = NULL;

    Node* temp = new Node();
    temp->data = n;
    temp->next = NULL;

    if(tail == NULL || head== NULL )
    {
        head = tail = temp;
    }
    else
    {
        tail->next = temp;
    }

    tail = temp;
//    return temp;

}


int pop()
{
    Node* it = head;
    head = it->next;
    int n = it->data;
    free(it);
    it = NULL;

    return n;

}

int top()
{
    return head->data;
}

bool isEmpty()
{
    if(head==NULL)
        return true;

    return false;
}


void print()
{
    Node* it=head;
    while(it!=NULL)
    {
        cout << it->data << " ";
        it = it->next;
    }
    cout << endl;
}




/*

Sample Input

Sample Output


*/
