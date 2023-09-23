#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    int arr[] {15,20,5,15};
    int brr[] {15,15,15,20,10};
    int a = sizeof(arr)/ sizeof(arr[0]);
    int b = sizeof(brr) /sizeof(brr[0]);
    unordered_set<int> set;
    for(auto i : arr)
        set.insert(i);
    for(auto o : brr)
        set.insert(o);
    cout << set.size();
    
    return 0;
}