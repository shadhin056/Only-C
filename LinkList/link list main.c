//sorted linked list
#include<stdio.h>
struct Node
{
    int data;
    struct Node* next;

};
struct Node* head;
int get_size_of_list()
{
    int count=0;
    struct Node* currNode = head;
    while(currNode!=NULL)
    {
        count++;
        currNode = currNode->next;
    }

    return count;
}
void add(int n)
{
    struct Node* tempNode = (struct Node*)malloc(sizeof(struct Node));
    tempNode->data = n;
    tempNode->next = head;

    head = tempNode;

}
void append(int n)
{
    struct Node* tempNode = (struct Node*)malloc(sizeof(struct Node));
    tempNode->data = n;
    tempNode->next = NULL;

    struct Node* currNode = head;
    while(currNode->next!=NULL)
    {
        currNode = currNode->next;
    }
    currNode->next = (struct Node*)tempNode;

}

void insert_to_a_position(int n,int pos)
{
    if(pos==0)
    {
        return add(n);
    }

    struct Node* tempNode = (struct Node*)malloc(sizeof(struct Node));
    tempNode->data = n;

    struct Node* currNode = head;
    int i=0;
    for(i; i<pos-1; i++)
    {
        currNode = currNode->next;
    }
    tempNode->next = currNode->next;
    currNode->next = tempNode;
}
void Insert(int n)
{
    int count=0;
    struct Node* currNode = head;
    while(currNode!=NULL)
    {
        if((currNode->data) > n)
        {
            break;
        }
        count++;
        currNode = currNode->next;
    }
    insert_to_a_position(n,count);
}
void delete_from_begining()
{
    if(head==NULL)
        return;

    struct Node* currNode = head;
    head = currNode->next;
    free(currNode);
    currNode = NULL;
}
void delete_from_a_position(int pos)
{
    if( head==NULL || pos<0 || pos>get_size_of_list()-1)
    {
        return;
    }
    if(pos==0)
    {
        return delete_from_begining();
    }
    struct Node* currNode = head;
    int i=0;
    for(i; i<pos-1; i++)
    {
        currNode = currNode->next;
    }

    struct Node* tempNode = currNode->next;
    currNode->next = tempNode->next;
    free(tempNode);
    tempNode=NULL;

}

int Search(int n)
{
    int count=0;
    struct Node* currNode = head;
    while(currNode!=NULL)
    {

        if(currNode->data==n)
        {
            return count;
        }
        count++;
        currNode = currNode->next;
    }

    return -1;
}

int Delete(int n)
{
    int pos = Search(n);

    if(pos!=-1)
    {
        delete_from_a_position(pos);
    }
    return pos;
}
void display()
{   printf("\nElements in the list: ");
    struct Node* currNode=head;
    while(currNode!=NULL)
    {
         printf("\ncurrNode->data : ");
        currNode = currNode->next;
    }
    printf("\n");
}




int main()
{
    head=NULL;
    int n;

    while(1)
    {
        printf("\nList Operations");
        printf( "\n===============");
        printf( "\n1. Insert");
        printf( "\n2. Display");
        printf( "\n3. Size");
        printf( "\n4. Delete");
        printf( "\n5. EXIT!!");
        printf( "\nEnter your choice : ");

        int m;
        scanf("%d",&n);

        switch(m)
        {
        case 1:
            printf("Enter The Number to Insert : ");
            scanf("%d",&n);
            Insert(n);
            break;

        case 2:
            display();
            break;

        case 3:
            printf("List Size : ");
            get_size_of_list();
                printf("\n");
            break;
        case 4:
            if(head==NULL)
            {
                printf("List is Empty : ");
                printf("\n");
                break;
            }
            printf("Enter The Number to Delete : ");

            scanf("%d",&n);
            int flag = Delete(n);

            if(flag!=-1)
            {
                printf("n  deleted successfully \n");
            }
            else
            {
                printf("n   not found in the list \n");
            }
            break;
        }

        if(m==5)
            break;
    }

    return 0;
}


