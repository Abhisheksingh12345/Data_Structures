#include <iostream>
using namespace std;
int hoare_partition(int [],int ,int);
int main() {
    int arr[] {};
    int size = sizeof(arr)/sizeof(arr[0]);
    int high = size-1;
    int low = 0;
    hoare_partition(arr, high, low);
}