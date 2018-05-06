//Created by SWH
#include<stdio.h>
int main()
{
    int a = 5;
    int *b;
    b = &a;
    printf("\na = %d", a);
    printf("\n&a = %d", &a);
    printf("\n*(&a) = %d", *(&a));
    printf("\nb = %d", b);
    printf("\n&b = %d", &b);
    printf("\n*b = %d", *b);
    printf("\n*(&b) = %d", *(&b));
    return 0;
}