#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node*head=NULL;
void insert()
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the value");
    int value;
    scanf("%d",&value);
    newnode->data=value;
    if(head == NULL)
    {
        newnode->next=NULL;
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
    printf("the value %d is inserted successfully");
}
void display()
{

}
void deletefrombeginning()
{

}
int main()
{
    int choice;
    while(1)
    {
        printf("enter the value");
        printf("1-insert the value");
        printf("2-display the value");
        printf("3-delete the value");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter the value");
            break;
        case 2:
            printf("the values in the  list are:");
            break;
        case 3:
            deletefromthebeginning();
            break;
        default:
            printf("wrong value is entered");
            break;
        }
    }
    return 0;
}
