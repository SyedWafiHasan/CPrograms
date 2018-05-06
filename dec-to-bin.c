#include<stdio.h>
int main()
{
    int d, b = 0, m, n, i, bin = 0;
    printf("Enter a decimal number.");
    scanf("\n%d", &d);
    for(d; d>0; d = d/2)
    {
        m = d%2;
        b = (b*10) + m;
    }
    for(i = b; i>0; i = i/10)
    {
        n = i%2;
        bin = (bin*10) + n;
    }
    printf("%d", bin);
    return 0;
}
