//To implement bubble sort in an array in C
#include<stdio.h>

int main()
{
    int size, i, j;
    printf("Enter size of the array\n");
    scanf("%d", &size);
    int arr[size];
    printf("\nEnter elements of the array\n");
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    for(i = 0; i < size - 1; i++)
    {
        for(j = 0; j < size-i-1; j++)
        {
            if(arr[j] < arr[j+1])
            {
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }
    }
    printf("\nThe sorted array is : \n");
    for(i = 0; i < size; i++)
        printf("%d\t", arr[i]);
    return 0;
}
