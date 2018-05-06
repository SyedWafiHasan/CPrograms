//WAP to implement insertion sort in C
#include<stdio.h>

void insertion_sort(int arr[], int size);

int main()
{
    int i, size;

    printf("Enter size of the array\n");
    scanf("%d", &size);

    int arr[size];

    printf("\nEnter elements of the array\n");
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    insertion_sort(arr, size);
    return 0;
}

void insertion_sort(int arr[], int size)
{
    int i, j, temp;
    for(i = 1; i < size; i++)
    {
        temp = arr[i];
        j = i-1;
        while((temp < arr[j]) && (j >= 0))
        {
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[j+1] = temp;
    }

    printf("\nThe sorted array is :\n\n");
    for(i = 0; i < size; i++)
        printf("%d\t", arr[i]);
}
