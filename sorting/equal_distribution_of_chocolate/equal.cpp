#include <iostream>
#include <vector>
vector<int> getPackets(int arr[], int size, int m);
using namespace std;
void main() {
    int arr[] {7,3,2,4,9,12,15};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int m = 3;
    vector<int> packets = getPackets(arr, size, m);
    for(int i : packets) 
        cout << i << ' ';
}
vector<int> getPackets(int arr[], int size, int m) {
    vector<int> packets;

}