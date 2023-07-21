#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
 int main()
{
    struct node *head=NULL;
    struct node *temp=NULL;
    int n,i,data;
    printf("Input the number of nodes: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("Input data for node %d: ",i+1);
        scanf("%d",&data);

        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=data;
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
    }
    printf("Data entered in the list:\n");
    temp=head;
    while(temp!=NULL)
    {
        printf("Data = %d\n",temp->data);
        temp=temp->next;
    }
    return 0;
}






