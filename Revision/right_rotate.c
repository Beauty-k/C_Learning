#include<stdio.h>
#include<stdlib.h>
void right_rotate(int *arr, int size, int k);

void PrintArray(int *arr, int size)
{
    printf("array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int size;
    int k;
    printf("enter size of an array and k(position): ");
    scanf("%d%d", &size, &k);
    
    int *arr = malloc(size * sizeof(int));

    printf("enter elements of an array: ");
    for(int i = 0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    right_rotate(arr, size, k);
    free(arr);
    return 0;
}
void reverse(int *arr, int start, int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void right_rotate(int *arr, int size, int k)
{
    //reverse last k elements
    reverse(arr,size-k,size-1);
    PrintArray(arr,size);
    //Reverse remaining elements
    reverse(arr,0,size-k-1);
    PrintArray(arr,size);

    //Reverse entire array
    reverse(arr,0,size-1);
    PrintArray(arr,size);

}
