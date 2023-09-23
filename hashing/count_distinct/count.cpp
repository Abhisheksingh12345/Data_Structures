#include <iostream>
#include <unordered_set>
using namespace std;
int count_distinct(int arr[], int size) {
    unordered_set<int> s;
    for(int i = 0; i < size; i++)
        s.insert(arr[i]);
    return s.size()
}
int main(){
    int arr[] {15,12,13,12,13,13,18};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count = count_distinct(arr, size);
}