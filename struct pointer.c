#include<stdio.h>
#include<string.h>


struct structure
{
    char name [12];
    int value;
};
void swap (struct structure *a,struct structure *b )
{
    struct structure temp;
    strcpy(temp.name,a->name);
    temp.value=a->value;

    strcpy(a->name,b->name);
    a->value=b->value;

    strcpy(b->name,temp.name);
    b->value=temp.value;

}
int main()
{
    struct structure val1,val2;
    printf("Enter the val 1 and value :");
    scanf("%s%d",val1.name,&val2.value);

    printf("Enter the val 2 and value :");
    scanf("%s%d",val2.name,&val2.value);
    if(val2.value>val1.value)
        swap(&val2,&val1);
printf("val1 (%d) %s\n",val1.value,val1.name);

printf("val2 (%d) %s\n",val2.value,val2.name);
return 0;
}
