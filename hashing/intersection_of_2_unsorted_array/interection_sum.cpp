#include <iostream>
#include <unordered_set>
using namespace std;
void intersect_elements(int [], int , int [], int);
int main() {
    int arr[]{10,15,20,25,30,50};
    int a_size = sizeof(arr)/sizeof(arr[0]);
    int brr[]{30,5,15,80};
    int b_size = sizeof(brr)/sizeof(brr[0]);
    intersect_elements(arr, a_size, brr, b_size);
}