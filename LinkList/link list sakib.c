#include <stdio.h>
#include <stdlib.h>

/* #### Function Declarations #### */
void menu();

int insert(int number, int priority);
void display();
int size();
int delete_list();
void add(int number, int priority);
void append(int number, int priority);
void add_after(int number, int location, int priority);

/* #### Linked List Declaration #### */
struct Node
{
	int data;
	int priority;
	struct Node *next;
} *head;

int main()
{
	int choice=0, number=0, confirm=0, priority;
	while(1)
	{
		menu();
		number=0;
		choice=0;
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("\nEnter the number to insert: ");
			scanf("%d", &number);
			printf("Enter the priority: ");
			scanf("%d", &priority);
			insert(number, priority);
			break;
		case 2:
			display();
			break;
		case 3:
			printf("\n=> Size is : %d", size());
			break;
		case 4:
			if(head==NULL)
				printf("\n=> The List is Empty !\n");
			else
			{
				printf("Enter the number to delete: ");
				scanf("%d", &number);
				confirm = delete_list(number);
				if(confirm==0)
					printf("\n=> %d not found in the list.\n", number);
				else if(confirm==1)
					printf("\n=> %d deleted Successfully !\n", number);
			}
			break;
		case 5:
			exit(EXIT_SUCCESS);
			break;
		default:
			exit(EXIT_SUCCESS);
			break;
		}
		getchar();
	}
	return 0;
}

void menu()
{
	printf("\n\n\tList Operations: \n");
	printf("\t===========================\n");
	printf("\t1. Insert\n");
	printf("\t2. Display\n");
	printf("\t3. Size\n");
	printf("\t4. Delete\n");
	printf("\t5. Exit\n");
	printf("\tEnter your choice: ");

}

int insert(int number, int priority)
{
	struct Node *temp;
	int count=0;
	temp = (struct Node *) malloc(sizeof(struct Node));
	temp->data = number;
	temp->priority = priority;

	if( head == NULL )
		add(number, priority);
	else
	{
		count = 0;
		for(temp=head; temp!=NULL; temp=temp->next)
			if(temp->priority < priority)
				count++;
		if(count == 0)
			add(number, priority);
		else if( count == size() )
		{
			printf("Appending\n");
			append(number, priority);
		}
		else
			add_after(number, count, priority);
	}
	return 1;
}


void display()
{
	struct Node *temp;
	temp = (struct Node *) malloc(sizeof(struct Node));

	if(head == NULL)
		printf("\n=> List is Empty\n");
	else
	{
		//printf("\nElement(s) in the Lists are: ");
		printf("\tPriority \t Data\n");
		for(temp = head; temp!=NULL; temp=temp->next)
        {
            printf("\t  %d  \t\t   %d\n", temp->priority, temp->data);
        }
	}

	return;
}

int size()
{
	struct Node *list;
	int count=0;
	list = (struct Node *) malloc(sizeof(struct Node));

	for(list=head; list!=NULL; list=list->next)
		count++;

	return count;
}


int delete_list()
{
    int value;
    struct Node *temp = head;

    head = temp->next;
    value = temp->data;
    free(temp);

	return value;
}

void add(int number, int priority)
{
	struct Node *list;
	list = (struct Node *) malloc(sizeof(struct Node));
	list->data = number;
	list->priority = priority;
	list->next = NULL;
	if(head == NULL)
		head = list;
	else
	{
		list->next	= head;
		head = list;
	}


}

void append(int number, int priority)
{
	struct Node *list, *temp;
	list = (struct Node *) malloc(sizeof(struct Node));
	//temp = (struct Node *) malloc(sizeof(struct Node));
	list->data = number;
	list->priority = priority;
	temp = head;

	while(temp->next != NULL)
		temp=temp->next;

	temp->next = list;
	//temp = list;
	list->next = NULL;


}

void add_after(int number, int location, int priority)
{
	struct Node *list, *right, *prev;
	int i;
	list = (struct Node *) malloc(sizeof(struct Node));

	list->data = number;
    list->priority = priority;

	right = head;
	for(i=0; i < location; i++)
	{
		prev = right;
		right = right->next;
	}

	prev->next = list;
	list->next = right;


}
