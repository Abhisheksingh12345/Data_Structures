#include <iostream>
#include <algorithm>
using namespace std;
int getMiniDiff(int arr[], int size);
int main () {
    int arr[] {18};
    cout << arr[-1] << endl;
    int size = sizeof(arr)/ sizeof(arr[0]);
    cout << "Mini Diff " << getMiniDiff(arr, size);
    return 0;
}
int getMiniDiff(int arr[], int size) {
    sort(arr, arr+size);
    int res = INT32_MAX;
    for(int i = size-2; i > -1; i--) {
        res = min(res, (arr[i+1] - arr[i]));
    }
    return res;
}