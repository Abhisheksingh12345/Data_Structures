#include <iostream>
#include <unordered_map>
using namespace std;
void frequency_show(int [], int );
int main() {
    int arr[] {10,12,10,15,10,20,12,12};
    int size = sizeof(arr)/sizeof(arr[0]);
    frequency_show(arr, size);
}
void frequency_show(int arr[], int size) {
    unordered_map<int, int> map;
    for(int i = 0; i < size; i++){
        if (map[arr[i]] == 0)
            map[arr[i]] = 1;
        else
            map[arr[i]] = map[arr[i]] + 1;
    }
    for(auto x : map)
        cout << x.first << ' ' << x.second << endl;
}
