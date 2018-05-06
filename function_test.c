#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, s = 0;
    printf("Enter two numbers.");
    scanf("\n%d\n%d", &a, &b);
    s = sum(a,b);
    printf("%d", s);
    return 0;
}
int sum(int x, int y)
{
    int z = 0;
    z = x+y;
    return z;
}
