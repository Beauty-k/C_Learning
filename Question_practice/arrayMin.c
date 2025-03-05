#include<stdio.h>
void Find_min(int *arr,int arr_size){
    
    //int min;
    int min = arr[0];
    int i = 1;
      while(i < arr_size){
        if(arr[i] < min)
        {
            min = arr[i];
        }
        i++;
    } 
    printf("%d\n",min);
    return ;
  

}
int main(){
    int arr_size;
    printf("enter size of array: ");
    scanf("%d",&arr_size);
    int arr[arr_size] ;
    printf("enter element of array: ");
    for(int i = 0; i<arr_size; i++)
    {
        scanf("%d",&arr[i]);

    }

    Find_min(arr,arr_size);
   

    

}