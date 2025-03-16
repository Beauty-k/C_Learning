#include<stdio.h>
#include<stdlib.h>


void reverse_using_recursion(int *arr, int start, int end){
    int temp;
    if(start >= end) return;
    
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    printf("%d %d %d %d\n",start, end, arr[start], arr[end]);
    reverse_using_recursion(arr, start+1, end-1);
}

void reverse_using_iteration(int size, int *arr){
    for(int i = 0; i < size/2; i++){
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

void PrintArray(int *arr, int size){
    printf("array is: ");
    for(int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

}

int main(){
    int size;
    printf("enter size of an array: ");
    scanf("%d", &size);
    int *arr = malloc(size * sizeof(int));

    for(int i = 0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    
    // PrintArray(arr,size);
    // reverse_using_iteration(size, arr);
    // PrintArray(arr,size);
    printf("Original array: ");
    PrintArray(arr,size);
    reverse_using_recursion(arr, 0, size-1);
    printf("Reversed array: ");
    PrintArray(arr,size);

    free(arr);
    return 0;
}