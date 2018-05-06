#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
}*start;
typedef struct node list;
void create(int);
//void insert_beg(int);
//void delete_beg();
void display();
void main()
{
    system("cls");
    start = NULL;
    while(1)
    {
        int ch, da;
        printf("\n1. Create a linked list.");
        printf("\n2. Insert at the beginning");
        printf("\n3. Delete at the beginning");
        printf("\n4. Display the linked list");
        printf("\n5. Exit\n");
        scanf("%d", &ch);
        switch(ch)
        {
        case 1:
            printf("\nEnter the data to be inserted\n");
            scanf("%d", &da);
            create(da);
            break;
        /*case 2:
            printf("\nInsert data to enter at the beginning\n");
            scanf("%d", &da);
            insert_beg(da);
            break;
        case 3:
            delete_beg();
            break;*/
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("\nWrong Choice");
        }
    }
}
void create(int x)
{
    list *temp, *q;
    temp = (list*)malloc(sizeof(list));
    temp -> data = x;
    temp -> next = NULL;
    if(start == NULL)
    {
        start = temp;
    }
    else
    {
        q = start;
        while(q -> next != NULL)
            q = q -> next;
        q -> next = temp;
    }
}

/*
void insert_beg(int data)
{

}
*/

void display()
{
    list *ptr = start;
    system("cls");
    printf("\n");
    if(start == '\0')
    {
        printf("\nThe List is empty");
        return;
    }
    else
        ptr = start;
    printf("\nThe List is\n");
    while(ptr != '\0')
    {
        printf("%d ->", ptr -> data);
        ptr = ptr -> next;
    }
    printf("NULL");
}
