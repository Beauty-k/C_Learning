#include <stdio.h>

void merge(int *arr, int left, int mid, int right)
{

    int left_length = mid - left + 1;
    int right_length = right - mid;
    int Left[left_length], Right[right_length];

    for (int i = 0; i < left_length; i++)
    {
        Left[i] = arr[left + i];
    }
    for (int i = 0; i < right_length; i++)
    {
        Right[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = left;

    while (i < left_length && j < right_length)
    {
        if (Left[i] < Right[j])
        {
            arr[k] = Left[i];
            i++;
        }
        else
        {
            arr[k] = Right[j];
            j++;
        }
        k++;
    }
    while (i < left_length)
    {
        arr[k] = Left[i];
        i++;
        k++;
    }
    while (j < right_length)
    {
        arr[k] = Right[j];
        j++;
        k++;
    }
}

void merge_sort(int *arr, int left, int right)
{
    int mid = left + (right - left) / 2;
    if (left < right)
    {
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main()
{
    int arr_size;
    printf("Enter no. of elements\n");
    scanf(" %d", &arr_size);
    int arr[arr_size];

    printf("Enter any %d elements\n", arr_size);

    for(int i = 0; i < arr_size; i++)
    {
        scanf(" %d", &arr[i]);
    }
    merge_sort(arr, 0, arr_size - 1);
    int i = 0;
    while (i < arr_size)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
}