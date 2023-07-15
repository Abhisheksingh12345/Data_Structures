#include<iostream>
void fun(int arr[], int sum, int size);
int main() {
    int arr[]{2,5,8,12,30};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 12;
    //this fun is used in sorted and un sorted array
    fun(arr, sum, size);
    return 0;
}