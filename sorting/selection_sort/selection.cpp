#include <iostream>
#include <vector>
using namespace std;

void swap(int arr[], int num1, int num2) {
    int temp = arr[num1];
    arr[num1] = arr[num2];
    arr[num2] = temp;
}
int selection_sort(int arr[], int size) {
   return 0; 
}
int main() {
    int arr[]{5,1,4,8,9,0};
    int size = sizeof(arr)/ sizeof(arr[0]);
    selection_sort(arr, size);
    for(int i : arr) {
        cout << i << ' ';
    }
    return 0;
}