#include<stdio.h>
#include<math.h>
int main()
{
    int d = 0, b, m, c = 0;
    printf("Enter a binary number.");
    scanf("%d", &b);
    for(b; b>0; b = b/10)
    {
        m = b%10;
        d = d + m*pow(2,c);
        c+=1;
    }
    printf("%d", d);
    return 0;
}
