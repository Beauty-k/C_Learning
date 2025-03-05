#include<stdio.h>
void find_max(int *arr, int size){
    int max = arr[0];
    int i = 1;
    while(i < size){
        if(arr[i] > max){
            max = arr[i];
        }
        i++;
    }
    printf("%d\n",max);
}
int main(){
    int size;
    printf("enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("enter array elements: ");
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    find_max(arr,size);
    return 0;
}