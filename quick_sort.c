//WAP to demonstrate quick sort in an array in C
#include<stdio.h>
#include<time.h>

int partition(int a[], int beg, int end, int size);
void qsort(int a[], int beg, int end, int size);

int main()
{
    int i, size;
    clock_t beg, end;
    printf("\nEnter size of the array\n");
    scanf("%d", &size);

    int arr[size];

    printf("\nEnter elements of the array\n");
    for(i = 0; i < size; i++)
            scanf("%d", &arr[i]);
    beg = clock();
    qsort(arr, 0, size-1, size);
    end = clock();

    printf("\nThe sorted array is :\n\n");
    for(i = 0; i < size; i++)
        printf("%d\t", arr[i]);
    printf("\nTime taken = %f seconds", ((end-beg)/CLOCKS_PER_SEC));
    return 0;
}

int partition(int arr[], int beg, int end, int size)
{
    int left, right, temp, part, flag;
    part = left = right;
    right = end;
    flag = 0;
    while(flag != 1)
    {
        while(arr)
    }

}
