#include <iostream>
#include <vector>
#include <algorithm>

struct pair
{
    /* data */
    int x, y;
};

bool comparing (pair p1, pair p2) {
    return p1.x > p2.x;
}


int main() {
    // first with array 
    int arr[] = {4,56,7,9,8,2,3,4,6,78,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    /**
     * using sort(arg1, arg2)
     * sort argument_1 take the reference of 1st variable 
     * and argument_2 take the reference beyoung the last element of array or collection.
     *
     */
    
    std::sort(arr, arr+n);
    for (int i : arr) {
       std::cout << i << " ";
    }
    std::cout << std::endl;
    std::vector<int> arr_2 = {2,4,68,45,63,6,7,2,5,45,7,88,5,6,2,4,8};
    /**
     * @brief .begin() -> give reference (address) of first
     *        .end()   -> give refernce (address) of beyong last.
     */
    std::sort(arr_2.begin(), arr_2.end());
    for (int i : arr_2) {
       std::cout << i << " ";
    }
    /**
     * @brief Now using custom comparision
     * 
     * 
     */

}