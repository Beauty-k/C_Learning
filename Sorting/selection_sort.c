#include<stdio.h>
#define max_size 5
void sort_array(int arr[]){
    for(int i =0; i<max_size; i++){
        for(int j = i+1; j<max_size; j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i<max_size; i++){
        printf("%d ",arr[i]);
    }
    return;
}
int main(){
    int arr[max_size] = {2, 1, 5, 8, 4};
    sort_array(arr);

}