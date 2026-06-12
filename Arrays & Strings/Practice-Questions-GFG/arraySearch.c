//CONCEPT IS LINEAR SEARCH
int search(int arr[], int n, int x) {
    //transverse the array from start to end 
    for(int i=0;i<n;i++){
        //if element is found , return its index
        if(arr[i]==x){
            return i;
        }
    }
    //if element not found return -1
    return -1;
}