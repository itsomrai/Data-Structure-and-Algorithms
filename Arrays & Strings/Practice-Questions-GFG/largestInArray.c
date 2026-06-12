//Concept is transversal with comparison
#include<stdio.h>
int main() {
   int arr[]={10,20,30,40,50};
   int n=5;
    int maxElement= arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>maxElement){
            maxElement=arr[i];
        }
    }
    printf("The largest element is %d",maxElement);
}