#include <stdio.h>
void count_frequency(int *arr,int size,int num){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == num){
            count++;
        }
    }
    if(count > 0){
        printf("yes, number being searched is present in this array\n");
    }
    printf("count of number is  %d\n",count);
    
}
int main()
{
    int arr[10];
    printf("enter elements of an array: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int num;
    printf("enter number to be searched: ");
    scanf("%d",&num);
    count_frequency(arr,10,num);
}