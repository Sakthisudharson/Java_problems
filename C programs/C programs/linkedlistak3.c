#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void insert()
{
    int value;
    struct node *newnode=malloc(sizeof(struct node));
    struct node *head=NULL;
    struct node *tail=NULL;
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
    }
}
void display()
{
    struct node *temp;
    temp=head;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void deleteitem()
{
    struct node *head=NULL;
    if(head==NULL)
    printf("list is empty and nothing to delete\n");
    struct node *cur=head;
    struct node *prev=NULL;
    struct node *ele=NULL;
    while(cur->data!=ele)
    {
        prev=cur;
        cur=cur->next;
    }
    if(prev!=NULL)
    {
        prev->next=cur->next;
        free(cur);
    }
}

void deletelast()
{
    struct node *head=NULL;
    if(head==NULL)
    {
        printf("list is empty and nothing to delete\n");
    }
    struct node *cur=head;
    struct node *prev=NULL;
    while(cur->next!=NULL)
    {
        prev=cur;
        cur=cur->next;
    }
    if(prev->next!=NULL)
        prev->next=NULL;
        free(cur);
}
int searchitem()
{
    struct node *temp;
    struct node *head=NULL;
    struct node *ele=NULL;
    temp=head;
    while(temp!=0)
    {
        if(temp->data==ele)
            return 1;
        temp=temp->next;
    }
    return 0;
}
void main()
{
    while(1)
    {
        printf("\n 1.Insert\n 2.display\n 3.deleteitem\n 4.deletelast\n 5.searchitem\n");
        printf("Enter the choice:");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insert();
                break;
            case 2:
                //printf("Elements in the linked list is:%d");
                display();
                break;
            case 3:
                printf("Deleted elements in the linked list is:%d");
                deleteitem();
                break;
            case 4:
                deletelast();
                break;
            case 5:
                searchitem();
                break;
            default:
                printf("Invalid choice...");
                break;
        }
    }
}

