//add functioon

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

    struct node* temp = new node();
    temp->data=n;
    temp->link=head;
    head=temp;
 }
int main()
{
  head =NULL;
  int n;
  scanf("%d",&n);
  add(n);

}
