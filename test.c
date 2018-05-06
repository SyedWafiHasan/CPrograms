#include<stdio.h>
int main()
{
    int n, sum = 0, m;
    printf("Enter a number.\n");
    scanf("%d", &n);
    for(n; n>0; n = n/10)
    {
        m = n%10;
        sum = sum + m;
    }
    printf("%d", sum);
    return 0;
}
