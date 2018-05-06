#include<stdio.h>

void input(int x[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        scanf("%d", &x[i]);
}

void sort(int x[], int n)
{
    int temp, i, j;
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(x[j] > x[j+1])
            {
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }
}

void print(int x[], int n)
{
    int i;
    printf("\nThe array is : \n");
    for (i = 0; i < n; i++)
        printf("%d\t", x[i]);
}

void merge(int x[], int y[], int z[], int xs, int ys)
{
    int i = 0, j = 0;
    while(i != xs)
    {
        z[j] = x[i];
        i += 1;
        j += 1;
    }

    i = 0;

    while(i != ys)
    {
        z[j] = y[i];
        i += 1;
        j += 1;
    }
}

int main()
{
    int a[50], b[50], c[100];
    int as, bs, cs, i;
    printf("\nEnter size of arrays A and B\n");
    scanf("%d%d", &as, &bs);
    cs = as + bs;
    printf("\nEnter elements of array A\n");
    input(a, as);
    printf("\nEnter elements of array B\n");
    input(b, bs);
    sort(a, as);
    sort(b, bs);
    merge(a, b, c, as, bs);
    sort(c, cs);
    print(c, cs);
}
