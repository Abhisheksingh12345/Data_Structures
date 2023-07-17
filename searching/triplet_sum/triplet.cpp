#include<iostream>
bool triplet(int [], int , int);
using namespace std;
int main() {
    int arr[] {2,4,8,9,,20,40,41};
    int sum = 32;
    int size = sizeof(arr)/ sizeof(arr[0]);
    cout << triplet(arr, sum, size) ;
    return 0;
}