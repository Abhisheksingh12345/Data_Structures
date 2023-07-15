#include<iostream>
int rotated_array(int arr[], int element, int size);
using namespace std;
int main() {
    int arr[]{100,200,300,10,20,30,35};
    int element  = 100
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << rotated_array(arr, element, size);
}