#include<iostream>
int repeatedno(int [], int size);
using namespace std;
int main() {
    int arr[] {0,2,1,3,2,2};
    int size =  sizeof(arr)/ sizeof(arr[0]);
    cout << repeatedno(arr, size);
}

