#include<stdio.h>
void reverse_array(int *arr, int size){
    int i = 0; int j = size - 1;
    int temp;
    //  while(i < size){
    //     printf("%d\n",arr[i]);
    //     i++;
    // }
    while(i<(size/2) ){
      // printf("in loop\n");
        temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
        i++;

    }
    while(i < size){
        printf("%d\n",arr[i]);
        i++;
    }
}
int main()
{
    int size;
    printf("enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("enter array elements: ");
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    reverse_array(arr,size);

    return 0;
}
 
 
 