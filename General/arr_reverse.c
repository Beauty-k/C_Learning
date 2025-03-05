#include <stdio.h>
#include <stdlib.h>
void arr_reversal(int size,int *arr)
{
    printf("in funcn\n");
    int temp = 0;
    for(int i = 0; i < size/2; i++){
    printf("%d\n",arr[i]);

        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
    for(int i = 0; i < size/2; i++){
        printf("%d\n",arr[i]);
    }

}
int main()
{
    int num, *arr, i;
    printf("enter size of array: ");
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    printf("enter elements of array: ");
    for(i = 0; i < num; i++) {
        scanf("%d", (arr + i));
    }
    //arr_reversal(num,arr);

    /* Write the logic to reverse the array. */
    int j = 0;
    int temp = 0;
    while(j<(num/2)){
        temp = arr[j];
        arr[j] = arr[num - 1 - j];
        arr[num - 1 - j] = temp;
        j++;
    }

    for(i = 0; i < num; i++)
    printf("%d ", *(arr + i));
    return 0;
}