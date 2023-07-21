#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *next;
};
struct node *head;
void init()
{
    head=NULL;
}
void insertfirst(int element)
{
    struct node *New;
    New=(struct node*)malloc(sizeof(struct node));
    New->value=element;
    New->next=NULL;
    New->next=head;
    head=New;
}
void insertlast(int element)
{
    struct node *New,*temp;
    New=(struct node*)malloc(sizeof(struct node));
    if(New==NULL)
    {
        printf("Unable to allocate memory, ;")
    }
}
void insertafter(int element,int num)
{
    struct node*New;
    New=(struct node*)malloc(sizeof(struct node));
    New->value=element;
    New->next=NULL;
    struct node*prev=head;
    while(prev->value!=num)
    {
        prev=prev->next
    }
    New->next=prev->next;
    prev->next=New;
}










