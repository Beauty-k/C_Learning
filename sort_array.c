// #include <stdio.h>
// #include <stdlib.h>

// int get_hash_code(char *key)
// {
//        //Write code to generate hashcode, ensure the generated hashcode is between 0-100
//     int integer_key = 0;
//     int i = 0;
//     while(key[i] != '\0'){
//         integer_key = integer_key * 10 + (key[i] - '0');
//         printf("in loop %d\n",integer_key);
//         i++;
//     }
//         printf("after loop %d\n",integer_key);
    
//     int hashcode = integer_key % 100;
//     printf("%d\n",hashcode);
//     return hashcode;
// }

// int main()
// {
//     char *key = "487";
//     get_hash_code(key);
// }
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
