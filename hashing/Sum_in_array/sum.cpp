#include <iostream>
#include <unordered_set>
using namespace std;
bool isSumContaine(int [], int, int);
int main() {
    int arr[] {3,2,8,15,-8};
    int sum = 17;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << isSumContaine(arr, sum, size);
}
bool isSumContaine(int arr[], int sum, int size) {
    //Methos 1 :
        // int b[9999] {0};
        // for(int i = 0 ;i < size; i++) {
        //     if(b[arr[i]] > 0)
        //         return true;
        //     b[(sum-arr[i])]++;
        // }
    //Method 2 :
        unordered_set<int> set;
        for(int i = 0; i < size; i++) {
            if(set.find(arr[i]) != set.end())   
                return true;
            else    
                set.insert(sum - arr[i]);
        }
        return false;
}