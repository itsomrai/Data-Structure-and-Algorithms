#include<stdio.h>
int pivotIndex(int* nums, int numsSize) {
    int totalSum = 0;
    int leftSum = 0;

    //Calculate the total sum of all elements in the array
    for (int i = 0; i < numsSize; i++) {
        totalSum += nums[i];
    }

    //Iterate through the array and check for the pivot index
    for (int i = 0; i < numsSize; i++) {
        // The right sum is mathematically: totalSum - leftSum - nums[i]
        if (leftSum == (totalSum - leftSum - nums[i])) {
            return i; // Found the leftmost pivot index
        }
        // Update the left sum for the next iteration
        leftSum += nums[i];
    }

    // If no pivot index matches the condition
    return -1;
}
int main(){
    int nums[]={1,2,3,4,5,6,7,8};
    int size=sizeof(nums)/sizeof(nums[0]);
    int result=pivotIndex(nums,size);
    printf("%d",result);
    return 0;
}
