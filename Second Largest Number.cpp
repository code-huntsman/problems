int secondLargest(int n, vector<int> &arr) {
    int largest = arr[0];
    int second = INT_MIN;

    for(int i=0; i<n; ++i) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] < largest) second = arr[i];
    }
    return second;
}
int secondSmallest(int n, vector<int> &arr) {
    int smallest = arr[0];
    int second = INT_MAX;

    for(int i=0; i<n; ++i) {
        if(arr[i] < smallest) {
            second = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < second && arr[i] > smallest) second = arr[i];
    }
    return second;
}
// start from here.
vector<int> getSecondOrderElements(int n, vector<int> a) {
    int largest = secondLargest(n, a);
    int smallest = secondSmallest(n, a);
    return {largest, smallest};
}
