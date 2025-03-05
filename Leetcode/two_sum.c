#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for(int i = 0; i<numsSize; i++){
        for(int j = i+1; j<numsSize; j++){
            if(nums[i] + nums[j] == target){
                returnSize[] = i;
                //returnSize[i+1] = j;
            }
        }
    }
    return returnSize;
}
int main(){
    int nums[] = {2,7,11,15};
    int *result = malloc(2*sizeof(int));
    result = twoSum(nums,4,9,result);
    for(int i = 0; i<2; i++){
        printf("%d ",result[i]);
    }
    printf("\n");
    free(result);
}