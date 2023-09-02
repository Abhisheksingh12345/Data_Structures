#include <iostream>

using namespace std;
void lomuto_partition(int arr[], int h, int l) {
    
}
int main() {
    int arr[] {3,8,6,12,10,7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int high = arr_size - 1;
    int low = 0;
    lomuto_partition(arr, high, low);

    return 0;
}