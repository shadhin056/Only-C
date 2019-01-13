//display functioon

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
int delete1()
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


int main()
{
    head =NULL;
    int n;
    //scanf("%d",&n);
    add(1);
    add(2);
    add(3);
    add(4);

    display();
    int k=delete1();
    printf("%d",k);
    display();
    delete1();
    display();
    delete1();
    display();
    delete1();
    display();
    delete1();
    display();


}
