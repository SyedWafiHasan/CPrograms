#include<stdio.h>
//#include<conio.h>
#define size 10

int queue[size];
int front = -1;
int rear = -1;
int i;
void insert(int x)
{
    rear += 1;
    if(rear >= size)
        printf("\nQueue Overflow");
    else
        queue[rear] = x;
}

int delete()
{
    if(rear<0)
        printf("\nQueue Underflow");
    else
    {
        front = queue[0];
        for(i = 0; i < rear; i++)
        {
            queue[i] = queue[i+1];
        }
        rear -= 1;
    }
    return front;
}

int main()
{
    int ch, val, pop_value;
    while(1)
    {
    printf("\nEnter :\n1 to insert.\n2 to delete.\n3 to exit.\n");
    scanf("%d", &ch);
    if(ch == 1)
    {
        printf("\nEnter value to insert\n");
        scanf("%d", &val);
        insert(val);
        printf("\nThe queue after insertion is :\n");
        for(i = 0; i <= rear; i++)
            printf("\n%d", queue[i]);
    }
    else if(ch == 2)
    {
        pop_value = delete();
        printf("\nThe dequeued value is %d", pop_value);
        printf("\nThe queue after dequeue is :");

        for(i = 0; i <= rear; i++)
            printf("\n%d", queue[i]);
    }
    else if(ch == 3)
        return 0;
    else
        printf("\nWrong choice\n");
    }
}
