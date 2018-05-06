//WAP to implement linear search in C
#include<stdio.h>
#include<time.h>

void search(int a[], int, int);
int main()
{
    printf("\nEnter size of the array\n");
    int size, x, i;
    scanf("%d", &size);
    int arr[size];
    printf("\nEnter elements of the array\n");
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("\nEnter number to be searched\n");
    scanf("%d", &x);
    clock_t start, end;
    start = clock();
    search(arr, size, x);
    end = clock();
    printf("\nThe time taken is : %f seconds", ((double)(end-start)/CLOCKS_PER_SEC));
    return 0;
}

void search(int arr[], int size, int x)
{
    int i, count = 0;
    for(i = 0; i < size; i++)
    {
        if(arr[i] == x)
        {
            ++count;
            printf("\n Occurrence No : %d. Element %d found at position %d\n",count,
                   x, i+1);
        }
    }
    if(count == 0)
        printf("\nElement not found in array");
}
