#include<stdio.h>
//#include<conio.h>
#define size 10

int stack[size];
int top = -1;
void push(int x)
{
    ++top;
    if(top >= size)
        printf("\nStack Overflow\n");
    else
        stack[top] = x;
}
int pop()
{
    int val;
    if(top == -1)
        printf("\nStack Underflow\n");
    else
        val = stack[top];
    top--;
    return val;
}

int main()
{
    int ch, val, i, pop_value;
    while(1)
    {
    printf("\nEnter :\n1 to push.\n2 to pop.\n3 to exit.\n");
    scanf("%d", &ch);
    if(ch == 1)
    {
        printf("\nEnter value to push\n");
        scanf("%d", &val);
        push(val);
        printf("\nThe stack after pushing is :\n");
        for(i = 0; i <= top; i++)
            printf("\n%d", stack[i]);
    }
    else if(ch == 2)
    {
        pop_value = pop();
        printf("\nThe popped value is %d", pop_value);
        printf("\nThe stack after popping is :");
        for(i = 0; i <= top; i++)
            printf("\n%d", stack[i]);
    }
    else if(ch == 3)
        return 0;
    else
        printf("\nWrong choice\n");
    }
}
