//WAP to implement binary search
#include<stdio.h>
int main()
{
    int i = 0, size = 0, val = 0, x = 0, beg = 0, mid = 0, end = 0;
    printf("\nEnter size of the array\n");
    scanf("%d", &size);
    int arr[size];

    printf("\nEnter elements in ascending order\n");
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("\nEnter element to be searched\n");
        scanf("%d", &x);
    end = size - 1;

    while(beg<=end)
    {
        mid = (beg + end)/2;
        if(arr[mid] == x)
        {
            val += 1;
            printf("\nElement found at index %d", (mid+1));
            break;
        }
        else if (arr[mid] > x)
            end = mid - 1;
        else if (arr[mid] < x)
            beg = mid + 1;
    }
    if(val == 0)
        printf("\nElement not found\n");
    return 0;
}
