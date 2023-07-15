#include<iostream>
int rotated_array(int arr[], int element, int size);
int search(int arr[], int element, int lower_bound, int upper_bound);
using namespace std;
int main() {
    int arr[]{100,200,300,10,20,30,35};
    int element  = 100;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << rotated_array(arr, element, size);
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
    if(arr[0] < arr[mid] && x < arr[mid]){
        return search(arr, x, 0, mid-1);
    }
}