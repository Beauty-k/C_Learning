#include <stdio.h>
#include <stdlib.h>

void LeftRotate(int *arr, int size, int k);

void PrintArray(int *arr, int size)
{
    printf("array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int size;
    int k;
    printf("enter size of an array and k(position): ");
    scanf("%d%d", &size, &k);

    int *arr = malloc(size * sizeof(int));

    printf("enter elements of an array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    LeftRotate(arr, size, k);
    free(arr);
    return 0;
}

void reverse(int *arr, int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void LeftRotate(int *arr, int size, int k)
{
    // Reversing first k elements
    reverse(arr, 0, k - 1);
    PrintArray(arr, size);
    // Reverse remaining element from k to size-1
    reverse(arr, k, size - 1);
    PrintArray(arr, size);

    reverse(arr, 0, size - 1);
    PrintArray(arr, size);
}
