#include <stdio.h>
int Linear_search(int *arr, int first, int last, int target)
{
    if (first > last)
        return -1;
    int mid = (first + last) / 2;
    if (target == arr[mid])
    {
        return mid;
    }
    if (target > arr[mid])
    {
        Linear_search(arr, (mid + 1), last, target);
    }
    if (target < arr[mid])
    {
        Linear_search(arr, first, (mid - 1), target);
    }
}
int main()
{
    int size = 10;
    int arr[size];
    arr[size] = 1, 2, 4, 3, 5, 7, 9, 12, 10, 14;
    int first = 0;
    int last = size - 1;
    int target;
    printf("enter taget to be searched: ");
    scanf("%d", &target);
    Linear_search(arr, first, last, target);
}