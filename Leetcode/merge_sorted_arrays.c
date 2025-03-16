#include<stdio.h>
#include<stdlib.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int length = m + n;
    int *resultant_array;
    for(int i = 0; i< m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(nums1[i] > nums2[j]){
                int temp = nums1[i];
                nums1[i] = nums2[j];
                nums2[j] = temp;
            }
        }
                                        
    }
    // for(int i = 0; i < length; i++){
    //     resultant_array[i] = 
    // }
}

int main(){
    int m,n;
    printf("enter size of array1 and array2: ");
    scanf("%d%d", &m, &n);
    int *nums1 = malloc(m* sizeof(int));
    int *nums2 = malloc(n* sizeof(int));
    printf("enter array elements: ");
    for(int i = 0; i<m; i++){
        scanf("%d", &nums1[i]);
    }
    for(int i = 0; i<n; i++){
        scanf("%d", &nums2[i]);
    }
    merge(nums1,5,m, nums2, 5, n);
    return 0;
}