#include<stdio.h>
int main()
{
    int n, m, sum = 0, x;
    printf("Enter a number.");
    scanf("%d", &n);
    x = n;
    for(n; n>0; n = n/10)
    {
        m = n%10;
        sum = (sum*10) + m;

    }
    printf((sum == x)?"Palindrome":"Not Palindrome");
    return 0;
}
