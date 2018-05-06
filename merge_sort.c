//WAP to implement merge sort
#include<stdio.h>
#include<conio.h>
#include<time.h>
#define size 5
void merge(int a[], int, int, int);
void sort(int a[], int, int);
int main()
{
    int arr[size];
    int i;
    printf("\nEnter the elements of the array\n");
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    sort(arr, 0, size-1);
    printf("\nThe sorted array is: \n");
    for(i = 0; i < size; i++)
        printf("%d\t", arr[i]);
    return 0;
}
void merge(int arr[], int beg, int mid, int end)
{
    int i = beg, j = mid+1, index = beg, temp[size], k;
    while((i <= mid) && (j<=end))
    {
        if(arr[i] < arr[j])
        {
            temp[index] = arr[i];
            i++;
        }
        else
        {
            temp[index] = arr[j];
            j++;
        }
        index += 1;
    }
        if(i>mid)
        {
            while(j <= end)
            {
                temp[index] = arr[j];
                j++;
                index++;
            }
        }
        else
        {
            while(i <= mid)
            {
                temp[index] = arr[i];
                i++;
                index++;
            }
        }
    for(k = beg; k < index; k++)
        arr[k] = temp[k];
}

void sort(int arr[], int beg, int end)
{
    int mid;
    if(beg<end)
    {
        mid = (beg+end)/2;
        sort(arr, beg, mid);
        sort(arr, mid+1, end);
        merge(arr, beg, mid, end);
    }
}
