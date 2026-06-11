#include <stdio.h>
int main()
{
int arr[]={25,10,30,40,50,60};
int target=20;
int size=sizeof(arr)/sizeof(arr[0]);
int foundIndex=-1;

//Loop through the array
for(int i=0;i<size;i++){
    if(arr[i]==target){
        foundIndex=i;
        break;
    }
}
if(foundIndex != -1){
    printf("Element found at index %d\n", foundIndex);

}
else{
    printf("Error! Not found\n");
}
return 0;
}