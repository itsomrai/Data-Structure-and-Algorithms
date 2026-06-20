typedef struct {
    int* prefixSum; 
} NumArray;


NumArray* numArrayCreate(int* nums, int numsSize) {
    NumArray* numArr = malloc(sizeof(NumArray)); 
    numArr->prefixSum = malloc(sizeof(int) * numsSize); 
    int tempPrefix = 0; 
    for (int i = 0; i < numsSize; ++i) {
        tempPrefix += nums[i]; 
        numArr->prefixSum[i] = tempPrefix; 
    }
    return numArr; 
}

int numArraySumRange(NumArray* obj, int left, int right) {
    if (left > 0){
        return (obj->prefixSum[right] - obj->prefixSum[left-1]); 
    }
    else {
        return (obj->prefixSum[right]);
    }
}

void numArrayFree(NumArray* obj) {
    free(obj->prefixSum); 
    free(obj); 
}