#include<iostream>
double mediun(int [], int [], int size_1, int size_2);
using namespace std;
int main() {
    int arr[] {10,20,30,40,50};
    int arr2[] {5,15,25,35,45};
    int size_1 = sizeof(arr)/ sizeof(arr[0]);
    int size_2 = sizeof(arr2)/ sizeof(arr2[0]);
    cout << mediun(arr, arr, size_1, size_2);
}