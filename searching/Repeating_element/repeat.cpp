#include<iostream>
int repeatedno(int [], int size);
using namespace std;
int main() {
    int arr[] {};
    int size =  sizeof(arr)/ sizeof(arr[0]);
    cout << repeatedno(arr, size);
}