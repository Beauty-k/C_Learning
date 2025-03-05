#include<stdio.h>
#include<string.h>
void reverse(int arr[],int size){
    printf("in func\n");
    int temp = 0;

    int i = 0;
    while(i < (size/2)){
        printf("initial temp is: %d\n",temp);
        temp = arr[i];
        printf("later temp is: %d\n",temp);

        arr[i] = arr[size-1-i];
        printf("start element is: %d\n",arr[i]);

        arr[size-1-i] = temp;
        i++;
        
    }
    int j = 0;
    while(j < size){
        printf("%d\n",arr[j]);
        j++;
    }
}
int main(){
    int arr[5] = {5,6,7,8,9};
    reverse(arr,5);
    
}