#include <iostream>

using namespace std;
void partition_arr(int arr[], int size, int p) {
    int brr[size]{0};
    int h = size-1;
    int l = 0;
    for(int i = 0; i < size; i++) {
        if( p != i) {
            if(arr[i] <= arr[p])
                brr[l++] = arr[i];
            else    
                brr[h--] = arr[i];
        }
    }
    brr[h] = arr[p];
    for(int i = 0; i < size; i++) {
        cout << brr[i] << ' ';
    }
}
int main() {
    int arr[] {3,8,6,12,10,7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int index_p = 5;
    partition_arr(arr, arr_size, index_p);
    // int* brr = partition_arr(arr, arr_size, index_p);
    // for(int i = 0; i < arr_size; i++) {
    //     cout << brr[i] << ' ';
    // }
    return 0;
}