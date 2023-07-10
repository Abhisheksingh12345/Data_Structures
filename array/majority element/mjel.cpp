#include <iostream>
using namespace std;

int  index_m_elemt(int arr[], int size){
    int m_len = size/2;
    int index = 0;
    int abb[1000];
    for(; index < size; index++){
        int a = arr[index];
        int b = abb[a]++;
        if(b == m_len) {
            return index;
        }
    }
    return -1;
}


int main() {
    int arr[]{8,3,4,8,8};
    int size = sizeof(arr)/ sizeof(arr[0]);
    cout << index_m_elemt(arr, size);
}