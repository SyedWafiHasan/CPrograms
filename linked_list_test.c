#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int data;
    struct node next;
}*start;

typedef struct node node

void create();
void insert_beg();
void insert_mid();
void insert_end();
void delete_beg();
void delete_mid();
void delete_end();
void display();

void create()
{
    node *new_node, *current;
    char c;
    printf("\nEnter n when you're done with the list\n");
    do
    {
        new_node = (node*)malloc(sizeof(node));
        scanf("%d", &new_node.data)
        new_node.next = NULL;
        if(start == NULL)
        {
            start = new_node;
            current = new_node;
        }
        else
        {
            current.next = new_node;
            current = new_node;
            printf("\nDo you want to create another node?\n");
            c = getche();
        }
    }
    while(c != 'n');
}

void display()
{
    node *new_node;
    printf("\nThe link list is :\n");
    new_node = start;
    while(new_node != NULL)
    {
        printf("%d --->", new_node.data);
        new_node = new_node.next;
    }
    printf("NULL\n");
}

void insert_beg();
{
    node *new_node;
    new_node = (node*)malloc(sizeof())
}




















