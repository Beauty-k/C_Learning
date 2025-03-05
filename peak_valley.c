/*In an array of integers, a "peak" is an element which is greater than or equal to the adjacent integers and a "valley" is an element which is less than or equal to the adjacent inte­gers.
For example, in the array {5, 8, 6, 2, 3, 4, 6}, {8, 6} are peaks and {5, 2} are valleys. Given an array of integers, sort the array into an alternating sequence of peaks and valleys.
EXAMPLE
Input: {5, 3, 1, 2, 3}
Output: {5, 1, 3, 2, 3}*/

#include <stdio.h>
void swap(int *arr1, int *arr2)
{
    int temp = *arr1;
    *arr1 = *arr2;
    *arr2 = temp;
}
int main()
{
    int size;
    printf("enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("enter elements of an array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i = i = i+2)
    {

        if (i > 0 && arr[i] < arr[i + 1] && arr[i] < arr[i - 1])
        {
            swap(&arr[i], &arr[i - 1]);
        }

        if (i < size - 1 && arr[i] < arr[i + 1])
        {
            swap(&arr[i], &arr[i+1]);
        }

    }
    
    for(int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
}
