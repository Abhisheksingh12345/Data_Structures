#include<iostream>
int peak(int arr[], int size);
using namespace std;
int main() {
    int arr[]{5,80,40,30,20,50,60};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << peak(arr, size);
}