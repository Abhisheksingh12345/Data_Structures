#include <iostream>
#include <vector>
vector<int> getPackets(int [], int size);
using namespace std;
void main() {
    int arr[] {7,3,2,4,9,12,15};
    int size = sizeof(arr)/ sizeof(arr[0]);
    vector<int> packets = getPackets(arr, size);
    for(int i : packets) 
        cout << i << ' ';
}