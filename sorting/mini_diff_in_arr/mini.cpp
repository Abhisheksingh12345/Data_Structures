#include <iostream>
using namespace std;
int getMiniDiff(int arr[], int size);
void main () {
    int arr[] {1,8,12,5,18};
    int size = sizeof(arr)/ sizeof(arr[0]);
    cout << "Mini Diff " << getMiniDiff(arr, size);
}
int getMiniDiff(int arr[], int size) {
}