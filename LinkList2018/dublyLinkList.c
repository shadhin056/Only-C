#include <stdlib.h>
#include <stdio.h>>
typedef struct node Node;
struct node{
    int data;
    Node *next;
    Node *prev;

};
Node *create_node(int item,Node *next , Node *prev){
    Node *new_node=(Node*)malloc(sizeof(Node));
    if(new_node==NULL){
        printf("Error Could not create a Node\n");
        exit(1);
    }
    new_node->data=item;
    new_node->next=next;
    new_node->prev=prev;
    return new_node;
}
Node *append(Node *head,int item){
    Node *new_node=create_node(item,NULL,NULL);
    if(head==NULL){
        return new_node;
    }
    Node *current_node=head;
    while (current_node->next!=NULL){
        current_node=current_node->next;

    }
    current_node->next=new_node;
    current_node->prev=current_node;
    return head;
}
Node *remove_node(Node *head,Node *node){
    if(node ==head){

        head=node->next;
        node->prev=NULL;
        free(node);
        return  head;
    }
    Node *previous_node=node->prev;
    Node *next_node=node->next;
    previous_node->next=next_node;
    next_node->prev=previous_node;
    free(node);
    return head;
}
int main(){
return 0;
}
