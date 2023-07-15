#include<iostream>
int rotated_array(int arr[], int element, int size);
int search(int arr[], int element, int lower_bound, int upper_bound);
int apply_with_binary(int arr[], int element, int size);
using namespace std;
int main() {
    int arr[]{100,200,30,10,20,30,35};
    int element  = 10;
    int size = sizeof(arr)/sizeof(arr[0]);
    //O(n) lenior search
    //cout << search(arr, element, 0, size-1);
    // search with less then O(n)
    // cout << rotated_array(arr, element, size);
    cout << apply_with_binary(arr, element, size);
}
int apply_with_binary(int arr[], int x, int n) {
    int low = 0;
    int high = n;
    while(low <= high) {
        int mid = (low+high)-2;
        if(arr[mid] == n) return mid;
        
    }
}
int search(int arr[], int x, int l, int h) {
    for(int i = 0; i <= h; i++) {
        if(arr[i] == x)
            return i;
    }
    return -1;
}
int rotated_array(int arr[], int x, int n) {
    int mid = n/2;
    if(arr[mid] == x) return mid;
    if(arr[0] < arr[mid]){
        if(x >= arr[0] && x < arr[mid])
            return search(arr, x, 0, mid-1);
        else
            return search(arr,x,mid+1, n-1);
    } 
    else {
        if(x > arr[mid] && x <= arr[n-1])
            return search(arr, x, mid+1, n-1);
        else 
            return search(arr, x, 0, mid-1);
    }
    return -1;
}