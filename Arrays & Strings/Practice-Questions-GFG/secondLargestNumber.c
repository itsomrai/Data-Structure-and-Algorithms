
int getSecondLargest(int arr[], int n) {
    if (n < 2){
        
    return -1;
    }
    int largest = -1;
    int secondLargest = -1;
    
    for (int i = 0; i < n; i++) {
        // If current element is greater than largest, update both
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        // If current element is in between largest and second largest
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    return secondLargest;
}
