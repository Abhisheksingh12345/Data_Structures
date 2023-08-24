#include <iostream>
#include <vector>
using namespace std;

void swap(int arr[], int num1, int num2) {
    int temp = arr[num1];
    arr[num1] = arr[num2];
    arr[num2] = temp;
}
int bubble_sort(int arr[], int size) {
    int temp = 0;
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if(arr[j] > arr[j+1])
                swap(arr, arr[j],arr[j+1]);
        }
        for(int k = 0; k < size; k++) {
            cout << arr[k] << ' ';
        }
        cout<<endl;
    }
   return 0; 
}
int main() {
    int arr[]{5,1,4,8,9,0};
    int size = sizeof(arr)/ sizeof(arr[0]);
    bubble_sort(arr, size);
    for(int i : arr) {
        cout << i << ' ';
    }
    return 0;
}