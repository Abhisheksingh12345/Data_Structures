#include <iostream>
using namespace std;
int[] merge(int arr[], int arr2[], int size1, int size2);

void display(int new_arr[], int size) {
    for(int i = 0; i  < size; i++) {
        cout << new_arr[i] << ' ';
    }   
}
int main() {
    int arr[]  = {10,20,35};
    int arr2[] = {5,50,50};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int size2 = sizeof(arr2)/ sizeof(arr2[0]);
    int new_arr[] = merge(arr, arr2, size, size2);
    display(new_arr, (size+size2));
}