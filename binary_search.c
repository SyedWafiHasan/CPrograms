//To perform binary search on an array
#include<stdio.h>
//#include<conio.h>
int main()
{
    int i = 0, size = 0, val = 0, x = 0, beg = 0, mid = 0, end = 0;
    printf("\nEnter size of array\n");
    scanf("%d", &size);
    int a[size];
    printf("\nEnter the elements of the array already sorted\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter element to be searched\n");
    scanf("%d", &x);
    beg = 0;
    end = size-1;
    while(beg <= end)
    {
        mid = (beg + end)/2;
        if(x == a[mid])
        {
            val += 1;
            printf("\nElement found at %d\n", (mid+1));
            break;
        }
        else if (a[mid] > x)
            end = mid - 1;
        else if (a[mid] < x)
            beg = mid + 1;
    }
    if(val == 0)
            printf("\nElement not found\n");
    return 0;
}
