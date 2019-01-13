//display functioon

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
  add(3);

  display();
}
