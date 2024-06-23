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
int hoare_partition(int arr[], int h, int l) {
    int pivot = arr[l];
    int i = l-1;
    int j = h+1;
    try {
        while(true) {
            do {
                i++;
            } while(arr[i] > pivot);
            do {
                j--;
            } while(arr[j] < pivot);
            if(i > j)
                return j;
            
        }
            throw -1;

    } catch (int error_code) {
        return error_code;
    }  
    
    return 0;
}