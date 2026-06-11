//Binary searching of elements by taking input in the code
#include <stdio.h>
int main()
{
int arr[]={10,20,30,40,50};//Must be sorted
int size=sizeof(arr)/sizeof(arr[0]);
int target=40;

int low=0;
int high = size-1;
int foundIndex=-1;

while(low<=high){
    int mid=(low+high)/2;
     
    if(arr[mid]==target){
        foundIndex=mid;
        break;//Stop looping immediately
    }
    else if(arr[mid] < target){
        low=mid+1; //Search right half
    }
    else{
        high = mid-1;//search left half
    }

}
if(foundIndex!=-1){
    printf("found at index %d\n",foundIndex);
}
else{
    printf("Not found");
}
return 0;
}