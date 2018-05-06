#include<stdio.h>
#include<conio.h>
long int fact();
int main()
{
    long int t = fact();
    printf("\nThe factorial is : %ld", t);
    return 0;
}
long int fact()
{
    int n, i;
    printf("Enter number\n");
    scanf("\n%d", &n);
    long int s = 1;
    for(i = n; i>0; i--)
    {
        s = s*i;
    }
    return s;
}