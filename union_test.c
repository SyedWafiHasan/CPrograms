#include<>

union data
{
    int y;
    int x;
}d1;

int main()
{
    d1.x = 9;
    d1.y = 8;
    printf("%d\t%d", d1.x, d1.y);
    return 0;
}
