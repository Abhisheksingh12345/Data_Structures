#include <iostream>
using namespace std;
int lamuto_partition(int [], int , int);
void qsort(int[], int, int);
int main() {
    int arr[] {8,4,7,9,3,10,5};
    int size = (sizeof(arr)/sizeof(arr[0]));
    int low = 0;
    int high = size-1;
    qsort(arr, low, high);
    
}
void qsort(int arr[], int low, int high) {
    if(low < high) {
        int p = lamuto_partition(arr, low, high);
        qsort(arr, low, p+1);
        qsort(arr, p+1, high);
    }
}