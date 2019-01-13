#include<stdio.h>
#include<isotream>
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
    temp=head;

}
int main()
{

    int n;
    head =NULL;
        printf("ADD the number=");
        scanf("%d",&n);
        add(n);

}
