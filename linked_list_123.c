//My implementation of singly linked list

#include<stdio.h>
#include<stdlib.h>

 typedef struct nd
{
    int data;
    struct node *next;
} node;
node *start = NULL;
void create()
{
    node *current, *newnode;
    printf("\nEnter the values to input. Enter 10101 to exit\n");
    while(1)
    {
        newnode = (node*)malloc(sizeof(node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if(newnode->data != 10101)
        {
            if(start == NULL)
            {
                start = newnode;
                current = newnode;
            }
            else
            {
                current->next = newnode;
                current = newnode;
            }
        }
        else
            return;
    }
}

void display()
{
    node *newnode;
    newnode = start;
    printf("\nThe list is : \n");
    while(newnode != NULL)
    {
        printf("%d\t", newnode->data);
        newnode = newnode->next;
    }
    printf("NULL\n");
}

void insertAtBeg()
{
    node *begin;
    begin = (node*)malloc(sizeof(node));
    printf("\nEnter data to insert at the beginning\n");
    scanf("%d", &begin->data);
    begin->next = start;
    start = begin;
}

void insertAtEnd()
{
    node *end, *current;
    current = (node*)malloc(sizeof(node));
    printf("\nEnter data to insert at the end\n");
    scanf("%d", &current->data);
    while
}

int main()
{
    create();
    display();
    return 0;
}
