#include<stdio.h>
int* runningSum(int* nums, int numssize) {
    for(int i=1;i<numssize;i++){
        nums[i]+=nums[i-1];
    }
    return nums;
}
int main(){
    int nums[]={1,2,3,4,5};
    int size= sizeof(nums)/sizeof(nums[0]);
    runningSum(nums,size);

    printf("Running Sum :");
    for(int i=0;i<size;i++){
        printf("%d",nums[i]);
    }
    return 0;
}
