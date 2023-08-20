#include <iostream>
#include <vector>
using namespace std;

int bubble_sort(int arr[], int size) {
   return 0; 
}
int main() {
    int arr[]{};
    int size = sizeof(arr)/ sizeof(arr[0]);
    bubble_sort(arr, size);
    for(int i : arr) {
        cout << i << ' ';
    }
    return 0;



}