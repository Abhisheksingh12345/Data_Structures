#include<iostream>
int peak(int arr[], int size);
using namespace std;
int main() {
    int arr[]{5,80,40,30,20,50,60};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << peak(arr, size);
}
int peak(int arr[], int n) {
    int low = 0;
    int high = n-1;
    while(low <= high) {
        int mid = (low+high)/2;
        if((mid == 0 || arr[mid] >= arr[mid-1]) && (mid == n-1 || arr[mid] >= arr[mid+1]))
            return arr[mid];
        if(mid > 0 && arr[mid] <= arr[mid-1])
            high = mid-1;
        else    
            low = mid+1;
    }
    return -1;
}