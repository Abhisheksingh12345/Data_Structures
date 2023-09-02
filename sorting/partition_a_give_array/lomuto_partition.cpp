#include <iostream>

using namespace std;
void lomuto_partition(int arr[], int h, int l) {
    int temp = 0;
    int j = l-1;
    int pivot = arr[h];
    for(int i = l; i < h ; i++) {
        if(arr[i] < pivot) {
            j++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[j+1];
    arr[j+1] = arr[h];
    arr[h] = temp;

    for(int i = 0; i <= h; i++) {
        cout << arr[i] << ' ';
    }


}
int main() {
    int arr[] {3,8,6,12,10,7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int high = arr_size - 1;
    int low = 0;
    lomuto_partition(arr, high, low);

    return 0;
}