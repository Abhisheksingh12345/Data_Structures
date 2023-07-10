#include<iostream>

using namespace std;

void max_diff(int arr[], int n) {
    int res =  arr[1] - arr[0];
    int minval = arr[0];
    for(int i = 1; i < n; i++) {
        res = max(res, arr[i] - minval);
        minval = min(minval, arr[i]);
    }
    cout << res;
}
// void max_diff(int arr[], int lenght) {
//     int max = 0;
//     for(int i = 0; i < lenght; i++) {
//         for(int j = i+1; i < lenght; j++) {
//             if(arr[j] - arr[i] > max) {
//                max =  arr[j] - arr[i];
//             }
//         }
//     }
//     cout << max;
// }
int main() {
    int arr[] {2,3,10,6,4,8,1};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    max_diff(arr,size);
    return 0;
}