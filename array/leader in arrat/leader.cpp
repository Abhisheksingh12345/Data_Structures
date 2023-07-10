#include<iostream>

using namespace std;

// void leaders(int arr[], int n){
//     int j = 0;
//     int a = 0;
//     int temp[n];
//     int k = 0;
//     for(int i = 0 ; i < n; i++){
//         a = arr[i];
//         for(j = i+1; j < n; j++) {
//             if(a < arr[j])
//                 break;
//         }
//         if(j == n)
//         cout << a << ' ';
//     }   
// }
void leaders(int arr[], int n){
   int temp = arr[n-1];
   cout << temp;
   for(int i = n - 2; i >= 0; i--) {
    if(temp < arr[i]){
        temp = arr[i];
        cout<<temp << ' ';
    }
   }
}
int main() {
    int arr[] {7,10,4,3,6,5,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    leaders(arr,size);
    return 0;
}