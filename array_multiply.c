//Created by SWH
#include<stdio.h>
int main()
{
    int i, j, k, n, d = 0;
    printf("Enter the size of the square matrices.\n");
    scanf("%d", &n);
    int a[n][n], b[n][n];
    for(i = 0; i<n; i++)
    {
        for( j = 0; j<n; j++)
        {
            printf("Enter element for index %d, %d of the first array.\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i<n; i++)
    {
        for(j = 0; j<n; j++)
        {
            printf("Enter element for index %d, %d of the second array.\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (k = 0; k<n; k++)
    {
        for (i = 0; i<n; i++)
        {
            for(j = 0; j<n; j++)
            {
                d = d+(a[k][j]*b[j][i]);
            }
            printf("%d\t", d);
            d = 0;
        }
        printf("\n");
        }
    return 0;
    }