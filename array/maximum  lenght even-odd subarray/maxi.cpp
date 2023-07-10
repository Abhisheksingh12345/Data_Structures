#include <iostream>
using namespace std;

int getcheck(int val) {
    if (val & 1 == 1) return 1;
    return 0;
}
int  maxsubsum(int arr[], int size){
   int precheck = getcheck(arr[0]);
   int len = 1;
   for(int i = 1; i < size; i++){
    int check = getcheck(arr[i]);
    if(precheck^check)
        len++;
    precheck = check;
   }
   return len;
}


int main() {
    // int arr[] {10,12,14,7,8};
    // int arr[] {7,10,13,14};
    // cout<<5%5<<endl;
    int arr[]{10,12,8,4};
    int size = sizeof(arr)/ sizeof(arr[0]);
    cout << maxsubsum(arr, size);
}
