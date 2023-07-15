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
    }
}