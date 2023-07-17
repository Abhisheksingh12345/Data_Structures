#include<iostream>
bool triplet(int [], int , int);
using namespace std;
int main() {
    int arr[] {2,4,8,9,20,40,41};
    int sum = 32;
    int size = sizeof(arr)/ sizeof(arr[0]);
    cout << triplet(arr, sum, size) ;
    return 0;
}
bool triplet(int arr[], int sum, int n) {
    int start = 0;
    int end = n-1;
    int mid = end/2;
    if(n == 1 && n == sum) {
        return false;
    } 
    if(n == 2 && arr[start] + arr[end] == sum) {
        return false;
    }
    if(arr[start]+ arr[mid] + arr[end] == sum) {
        cout << "found";
        return true;
    }
    while(mid > start && mid < end) {
        if(arr[start] + arr[end]  > sum)
            end--;
        else if(arr[start] + arr[end] <  sum){
            if(arr[start] + arr[mid] + arr[end] == sum) {
                cout << "found";
                return true;
            }
            if(arr[start] + arr[mid] + arr[end] > sum) {
                if(mid > start) 
                    mid--;
                else
                    end--;
            } else {
                if(mid < end) {
                    mid++;
                } else  
                    start++;
            }
        } 
    }
    return false;

}