#include<iostream>
int infinite_size_arry(int arr[], int search_elemet);
int binary_search(int arr[], int search_element, int lower_bound, int upper_bound);
using namespace std;
int main() {
    // suppose you are give  finite no of array
    int arr[] {1,10,15,20,40,45,60,70,80,85,90,91,99,100,150,122,130};
    // with the search element as x = 64
    int x = 64;
    cout << infinite_size_arry(arr, x);
    return 0;
}

int infinite_size_arry(int arr[], int seach_element) {
    if(arr[0] == seach_element)
    return 0;
    int pre = 0;
    int i = 1;
    while(true) {
        if(arr[i] == seach_element)
            return i;
        else if(arr[i] > seach_element)
            return binary_search(arr, seach_element, pre, i);
        else {
            pre = i;
            i *= 2;
        }
    }
}
int binary_search(int arr[], int x, int l, int h) {
    int mid = 0;
    for(int i = l; l < h; i++){
        mid = (l+h)/2;
        if(arr[mid] == x){
            return mid;
        }
        if(arr[mid] < x){
            l = mid+1;
        }else if (arr[mid] > x) {
            h = mid-1;
        }
    }
    return -1;

}
