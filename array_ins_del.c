#include<stdio.h>
#include<conio.h>
int main()
{
    int n, c, a, val, pos;
    printf("Enter the number of elements of the array.\n");
    scanf("%d", &n);
    int ar[n];
    for(c = 0; c<n; c++)
        {
        printf("\nEnter element for position %d of the array." ,c);
        scanf("\n%d", &ar[c]);
        }
    printf("Enter 1 for insertion, 2 for deletion.");
    scanf("%d", &a);
    if(a == 1)
    {
        printf("Enter location of insertion.");
        scanf("%d", &pos);
        printf("Enter value to insert.");
        scanf("%d", &val);
        for(c = n-1; c>=pos-1; c--)
        {
            ar[c+1] = ar[c];
        }
        ar[pos-1] = val;
        printf("Array is : ");
        for(c = 0; c <= n; c++)
        {
            printf("%d\t", ar[c]);
             printf("\n%u", &ar[c]);
        }

    }
    }
