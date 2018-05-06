#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;
NODE *start=NULL;
void create();
void display();
void addAtBeg();
void addAtEnd();
void delAtBeg();
void delAtEnd();
void insertInMidB();
void insertInMidA();
void deleteAfter();
int main()
{
    int choice;
    while(1){
    printf("Choose an option from the given menu: \n 1.Creation. \n 2.Display \n 3.Addition at the beginning \n 4.Addition at the end. \n 5.Deletion at beginning \n 6.Deletion at end. \n 7. Exit.\n 8.Insertion before a given node. \n 9.Insertion after a give value. \n 10. Deletion after a given node. \n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:create();
           break;
    case 2: display();
                break;
    case 3: addAtBeg();
           break;
    case 4: addAtEnd();
            break;
    case 5: delAtBeg();
            break;
    case 6: delAtEnd();
            break;
    case 7: exit(0);
            break;
    case 8: insertInMidB();
             break;
    case 9: insertInMidA();
            break;
    case 10: deleteAfter();
             break;
            default: printf("Invalid choice.");
    }
    }
    return 0;
}
void create()
{
    NODE *new_node, *current;
    char c;
    printf("Enter n when you're done creating the list.\n");
    do{
        new_node=(NODE*) malloc(sizeof(NODE));
        printf("\n enter the data \n");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if(start==NULL)
        {
            start=new_node;
            current=new_node;
        }
        else
        {
            current->next=new_node;
            current=new_node;
        }
        printf("Do you want to create another node?\n");
        c=getche();

    }
    while(c!= 'n');
}
void display()
{
    NODE *new_node;
    printf("The linked list you created: \n");
    new_node=start;
    while(new_node!=NULL)
    {
        printf("%d ---->",new_node->data);
        new_node=new_node->next;
    }
    printf("NULL\n");
}
void addAtBeg()
{
    NODE *new_node;
    new_node=(NODE*)malloc(sizeof(NODE));
    printf("Enter value\n");
    scanf("%d",&new_node->data);
    new_node->next=start;
    start=new_node;
}
void addAtEnd()
{
    NODE *new_node, *last;
    new_node=(NODE*)malloc(sizeof(NODE));
    printf("Enter value\n");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    last=start;
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=new_node;
}
void delAtBeg()
{
    NODE *first;
    if(start==NULL)
        printf("Underflow\n");
    first=start;
    start=start->next;
    free(first);
}
void delAtEnd()
{
  NODE *last, *penultimate;
  last=start;
  if(start==NULL)
        printf("Underflow\n");
   while(last->next!=NULL)
   {
       penultimate=last;
       last=last->next;
   }
   penultimate->next=NULL;
   free(last);
}
void insertInMidB()
{
    NODE *new_node, *pre, *givenNode;
    new_node=(NODE*)malloc(sizeof(NODE));
    printf("Enter new node's value\n");
    scanf("%d",&new_node->data);
    printf("\n Enter the value before which insertion is to take place \n ");
    int val;
    scanf("%d",&val);
    givenNode=start;
    while(givenNode->data!=val)
    {
        pre=givenNode;
        givenNode=givenNode->next;
    }
    pre->next=new_node;
    new_node->next=givenNode;

    }
void insertInMidA()
{
    NODE *new_node, *preptr, *ptr;
    new_node=(NODE*)malloc(sizeof(NODE));
    printf("Enter value of the new node\n");
    scanf("%d",&new_node->data);
    printf("\n Enter the value after which insertion is to take place \n ");
    int val;
    scanf("%d",&val);
    ptr=start;
    preptr=ptr;
    while(preptr->data!=val)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=new_node;
    new_node->next=ptr;
}
void deleteAfter()
{
    NODE *preptr, *ptr;
    ptr=start;
    preptr=ptr;
    printf("\n Enter the value after which deletion is to take place.\n");
    int val;
    scanf("%d",&val);
    while(preptr->data!=val)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    free(ptr);
}
