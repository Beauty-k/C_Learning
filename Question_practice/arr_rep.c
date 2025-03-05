#include<stdio.h>
void occurence(int *arr, int size, int num){
    int count = 0;
    int i = 0;
    while(i<size){
        if(arr[i] == num){
            count = count + 1;
        }
        i++;
    }
    printf("%d\n",count);
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
    int num;
    printf("enter any number: ");
    scanf("%d",&num);
    occurence(arr,size,num);
}