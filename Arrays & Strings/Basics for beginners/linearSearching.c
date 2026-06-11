//Search element is present in the string or array or at which position it is there
#include <stdio.h>
#include <string.h>
int linearsearch(int arr[],int size, int target);

int linearsearch(int arr[],int size, int target){
       for(int i=0;i<size;i++){
        if(arr[i]==target){
         return i;//Element found, return its index
    }

}
return -1;//Element not found
}

int main()
{
    int arr[]={24,26,45,67,98,34,56};
    int target;
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("Enter the number which you have to search:\n");
    if (scanf("%d",&target) !=1){
        printf("invalid input.\n");
        return 1;
    }

    //call the search function
    int result= linearsearch(arr,size, target);

    if(result!=-1){
        printf("Element found at index : %d\n", result);
    }
    else{
        printf("Element not found in the array.\n");
    }
return 0;
}