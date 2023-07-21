#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*newnode,*temp;
int main()
{
    int choice;
    while(1)
    {
        printf("1-create the value");
        printf("2-display the value");
        printf("3-insertfront the value");
        printf("4-insert after the value");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insertfront();
            break;
        case 4:
            insertend();
            break;
        case 5:
            insertmid();
            break;
        case 6:
            deletefront();
            break;
        case 7:
            deleteend();
            break;
        case 8:
            deletemid();
            break;
        default:
            printf("invalid integer");
            break;
        }
    }
    return 0;
}
void create()
{

    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        temp=head;
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}

void insertfront(int element)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    print("enter the value to insert:");
    scanf("%",&newnode->data);
    newnode->next=NULL;
    head=newnode;
}
void insertend()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    print("enter the value to insert:");
    scanf("%",&newnode->data);
    newnode->next=head;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void insertmid()
{
    int pos,j;
    newnode=(struct node*)malloc(sizeof(struct node));
    print("enter the value to insert:");
    scanf("%",&newnode->data);
    printf("enter the position");
    scanf("%d",&pos);
    temp=head;
    for(j=1;j<pos-1;j++)
    {
        temp=temp->next;
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
void deletefront()
{
    temp=head;
    head=head->next;
    free(temp);
}
void deleteend()
{
    temp=head;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==head)
    {
        head=NULL;
    }
    else
    {
        prev->next=NULL;
    }
    free(temp);
}
void deletemid()
{
    int position ,k=1;
    printf("enter the value:");
    scanf("%d",)
}

