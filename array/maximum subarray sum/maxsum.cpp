#include <iostream>
using namespace std;

int  maxsubsum(int arr[], int size){
    int res = arr[0];
    for(int i = 0; i < size; i++) {
        int sum = 0;
        for(int j = i; j < size; j++) {
            sum += arr[j];
            res = max(sum, res);
        }
    }

    return res;
}


int main() {
    int arr[] {2,3,-8,7,-1,2,3};
    int size = sizeof(arr)/ sizeof(arr[0]);
    cout << maxsubsum(arr, size);
}
