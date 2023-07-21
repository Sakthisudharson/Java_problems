#include<stdio.h>
#define maxsize 10
int a[maxsize],n;
int main()
{
   int choice;
   printf("1 : create\n");
   printf("2 : display\n");
   printf("3 : insert\n");
   printf("4 : search\n");
   printf("5 : Delete\n");
   printf("6 : exit\n");
   printf("Enter the choice (1,2,3,4,5,6)");
   scanf("%d",&choice);
   switch(choice)


       {
           case 1: create();
           break;
           case 2: display();
           break;
          // case 3: insert();
         //  break;
           //case 4: search();
           break;
           //case 5: Delete();
           break;
           //case 6: exit(0);
           break;
           default:("Invalid option");

       }
       return 0;

}
   void create()
   {
       int i;
       printf("Enter the number of elements in the array :");
       scanf("%d",&n);
       for(i=0;i<n;i++)
     {
           scanf("%d",&a[i]);
       }
   }
   void display()
   {
       create();
       int i;
       for(i=0;i<n;i++)
       {
           printf("%d",a[i]);
       }
   }





