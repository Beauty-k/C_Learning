#include <stdio.h>
int main()
{
     int arr[5] = {5, 6, 3, 9, 1};
     for (int i = 0; i < 5; i++)
     {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // int i = 0;
    // int j = i+1;
    // while( i < 5){
     
    //  while(j < 5){
    //      if(arr[i] > arr[j]){
    //          int temp = arr[i];
    //          arr[i] = arr[j];
    //          arr[j] = temp;
    //      j++;
    //      }
    //  }
    //  i++;
    // }
    

    int temperory = 0;
    while (temperory < 5)
    {
        printf("%d\n", arr[temperory]);
        temperory++;
    }
}