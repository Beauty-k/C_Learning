#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sum_arr(int size, int arr[]){
    int sum = 0;
    for(int i = 0; i<size; i++){
        sum = sum + arr[i];
    }
    printf("%d\n",sum);
}
int main() {
    int size_of_array;
    printf("enter size of array: ");
    scanf("%d",&size_of_array);
    int arr[size_of_array];
    printf("enter elements of array: ");
    for(int i = 0; i < size_of_array; i++){
        scanf("%d",&arr[i]);
    }
    sum_arr(size_of_array,arr);

    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}