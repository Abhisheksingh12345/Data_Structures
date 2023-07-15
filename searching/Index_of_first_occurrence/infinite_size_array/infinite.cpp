#include<iostream>
int infinite_size_arry(int arr[], int search_elemet);
int binary_search(int arr[], int search_element, int lower_bound, int upper_bound);
using namespace std;
int mian() {
    // suppose you are give  finite no of array
    int arr[] {1,10,15,20,40,45,60,70,80,85,90,91,99,100,150,122,130};
    // with the search element as x = 64
    int x = 64;
    cout << infinite_size_arry(arr, x);
    return 0;
}

