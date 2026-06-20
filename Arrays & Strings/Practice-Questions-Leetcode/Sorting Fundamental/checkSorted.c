#include<stdio.h>
#include<stdbool.h>
int main() {
    int nums[]={1,2,3,4};
    int numsSize=sizeof(nums)/sizeof(nums[0]);
    int count = 0;

    if (nums[0] < nums[numsSize - 1]) {
        count++;
    }

    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            count++;
        }
        if (count > 1) {
         printf("False");
        }
        else{
            printf("true");
        }
    }
}
