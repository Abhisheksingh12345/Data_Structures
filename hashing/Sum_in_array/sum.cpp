#include <iostream>
#include <unordered_set>
using namespace std;
bool isSumContaine(int [], int);
int main() {
    int arr[] {3,2,8,15,-8};
    int sum = 17;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << isSumContaine(arr, sum);
}
