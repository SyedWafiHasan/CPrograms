//Created by SWH
#include<stdio.h>
double avg();
int main()
{
    double a;
    a = avg();
    printf("\nThe average is %lf", a);
    return 0;
}
double avg()
{
    double n, sum = 0, i, av;
    printf("\nEnter the limit\n");
    scanf("\n%lf", &n);
    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    av = sum/n;
    return av;
}