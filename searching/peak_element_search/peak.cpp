#include<iostream>
int peak(int arr[], int size);
using namespace std;
void more_peak(int arr[], int n) {
    if(n == 1)
        cout << arr[0] << " ";
    if(n == 2) {
        if(arr[0] <= arr[1])
            cout << arr[1] << " ";
        else 
            cout << arr[0] << " ";
    }
    for(int i = 1; i < n-1; i++) {
        if((arr[i] >= arr[i-1]) && (arr[i] >= arr[i+1]))
            cout << arr[i] << " ";
    }
}
int main() {
    int arr[]{5,80,40,30,20,50,60};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << peak(arr, size); //-> this works for finding only one of the element if want to find more peak element
    more_peak(arr, size);
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