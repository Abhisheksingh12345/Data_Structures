#include <iostream>
using namespace std;

int cons(int arr[], int n) {
    int max = 0;
    int max2 = max;
    bool entry = false;
    for (size_t i = 0; i < n; i++)
    {
        if(arr[i] == 1) {
            max++;
            entry = true;
        }
        if(arr[i] == 0 && entry) {
            max2 = (max < max2) ? max2 :  max;
            max = 0;
        }
    }
    return max2;
    
}
int main() {
    int arr[]{0,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << cons(arr, size);
}