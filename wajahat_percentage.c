#include<stdio.h>
#include<conio.h>
int main()
{
    double n, m;
    printf("\nenter the percentage and number\n");
    scanf("%lf\n%lf",&n,&m);
    double x = ((n/100)*m);
    printf("%lf percentage of %lf is %lf \n", n, m, x);
    return 0;
}
