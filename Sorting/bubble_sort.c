#include <stdio.h>
#define max_size 5
void sort_array(int arr[])
{
    for(int i = 0; i<max_size; i++){
        for(int j = 0; j<max_size - 1 - i; j++){
           
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int i = 0;
    while(i<max_size){
        printf("%d ",arr[i]);
        i++;
    }
    return;
}
int main()
{
    int arr[max_size] = {3,7,9,2,1};
    
    sort_array(arr);
}