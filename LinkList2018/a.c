#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct node Node;
struct node{
    int data;
    Node *next;
};
Node *create_node(int item ,Node *next){
    Node *new_node=(Node *)malloc(sizeof(Node));
    if(new_node==NULL){
        printf("Could not create a node\n");
        exit(1);
    }
    new_node->data=item;
    new_node->next=next;
    return new_node;
}
Node *prepend(Node *head ,int item){
    Node *new_node=create_node(item,head);
    return new_node;
}
Node *append(Node *head ,int item){
    Node *new_node=create_node(item,NULL);
    if(head==NULL){
        return new_node;
    }
    Node *current_node=head;
    while (current_node->next !=NULL){
        current_node=current_node->next;
    }
    current_node->next=new_node;
    return head;
}
void print_link_reverse(Node *head){
        if(head->next !=NULL){
            print_link_reverse(head->next);
        }
            printf("%d ",head->data);
}
void print_link_list(Node *head){
    Node *current_node=head;
    while (current_node !=NULL){
        printf("%d ",current_node->data);
        current_node=current_node->next;
    }
    printf("\n");
}
Node *remove_node(Node *head ,Node *node){
    if(node ==head){
        head = node->next;
        free(node);
        return head;
    }

    Node *current_node=head;
    while (current_node !=NULL){
        if (current_node->next == node){
            break;
        }
        current_node=current_node->next;
    }if(current_node==NULL){
        return head;
    }
    current_node->next=node->next;
    free(node);
    return head;
}
void insert(Node *node , int item){
    Node *new_node=create_node(item,node->next);
    node->next=new_node;
}
int count(Node *head){
    Node *current_node=head;
    int count=0;
    while (current_node !=NULL){
        count++;
        current_node=current_node->next;
    }
    printf("Total node : %d\n",count);
    return count;

}
Node *search(Node *head,int item){
    Node *current_node=head;
    int count=0;
    while (current_node !=NULL){
        count++;
        if(current_node->data==item){
            //count++;
            break;
        }
        current_node=current_node->next;
    }
    printf("Position  : %d",count);
    return head;
}
Node* Reverses(Node *head)
{
    if (head->next == NULL) {
       return head;
    }
    return Reverses(head)->next = head;
}
int main(){
    Node *n1,*n2,*n3,*n4,*head;
    n1=create_node(10,NULL);
    head=n1;
    printf("Now Total data ");
    print_link_list(head);
    n2=prepend(head,5);
    head=n2;
    printf("Now Total data ");
    print_link_list(head);
    n3=append(head,15);
    head=n3;
    printf("Now Total data ");
    print_link_list(head);
    n4=append(head,20);
    head=n4;
    printf("Now Total data ");
    print_link_list(head);
    insert(n4,17);
    printf("Now Total data ");
    print_link_list(head);
    count(head);
    printf("Data 10 is in the ");
    search(head,10);
    printf("\nReverse order : ");
    print_link_reverse(head);
    Reverses(head);
    printf("Now Total data ");
    print_link_list(head);
    return 0;
}
