#include<iostream>
void fun(int arr[], int sum, int size);
void fun2(int arr[], int sum, int );
using namespace std;
int main() {
    int arr[]{2,5,8,12,30};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 17;
    //this fun is used in sorted and un sorted array assuming you have unsorted array
    fun(arr, sum, size);
    //this fun is used in only sorted array
    fun2(arr, sum, size);
    return 0;
} 
void fun2(int arr[], int sum, int size) {
    int i = 0;
    int inner_sum = 0;
    int j = size;
    while( i < j) {
        inner_sum = arr[i] + arr[j];
        if(inner_sum == sum) {
            cout << arr[j] << " + " << arr[i] << " = " << inner_sum;
            break;
        }
        else if(inner_sum > sum)
            j--;
        else  
            i++;
    }
}
void fun(int arr[], int sum, int size) {
    int arr2[500]{0};
    arr2[abs(sum-arr[0])]++;
    for(int i = 1; i < size; i++) {
        if(arr2[arr[i]] > 0) {
            cout << arr[i] << " + " << sum - arr[i] << " = " << sum;
            break;
        }
        arr2[abs(sum-arr[i])]++;
    }
}