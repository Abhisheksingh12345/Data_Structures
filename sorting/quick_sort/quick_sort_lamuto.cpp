#include <iostream>
using namespace std;
int lamuto_partition(int[], int , int);
void qsort(int[], int, int);
void swap(int [], int , int );


void display(int arr[], int high) {
    for(int i = 0; i < high; i++)
        cout << arr[i] << ' ';
}
int main() {
    int arr[] {8,4,7,9,3,10,5};
    int size = (sizeof(arr)/sizeof(arr[0]));
    int low = 0;
    int high = size-1;
    qsort(arr, low, high);
    display(arr, size);

}

void swap(int arr[], int index_1, int index_2) {
    int temp = arr[index_1];
    arr[index_1] = arr[index_2];
    arr[index_2] = temp;
}

void qsort(int arr[], int low, int high) {
    if(low < high) {
        int p = lamuto_partition(arr, low, high);
        qsort(arr, low, p+1);
        qsort(arr, p+1, high);
    }
}

int lamuto_partition(int arr[], int low, int high) {
    int i = low-1;
    for(int j = low; j < high-1; j++) {
        if(arr[j] < arr[high]) {
            i++;
            if(arr[i] != arr[j])
                swap(arr, i, j);
        }
    }
    swap(arr, i+1, high);
    return i+1;
}