#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    // first with array 
    int arr[] = {4,56,7,9,8,2,3,4,6,78,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    /**
     * using sort(arg1, arg2)
     * sort argument_1 take the reference of 1st variable 
     * and argument_2 take the reference beyoung the last element of array or collection.
     * 
     * 
     */
    
    std::sort(arr, arr+n);

}