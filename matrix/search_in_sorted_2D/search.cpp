#include <iostream>
#include <vector>
using namespace std;
const int R = 4;
const int C = 4;

void isfound(int arr[][C], int x) {
    int mid = 0;
    int low = 0;
    int high = C-1;
    bool found = false;
    int i = 0;
    for(; i < R; i++) {
        while(low <= high) {
            mid = (high+low)/2;
            if(arr[i][mid] == x){
                found = !found;
                break;
            } else if(arr[i][mid] < x)
                low = mid + 1;
            else
                high = mid- 1;
        }
        if (found)
            break;
        low = 0;
        high = C-1;
    }
    if(found)
        cout<<"found at ("<< i <<", "<<mid <<')';
    else
        cout <<"not found";


}
int main(){
    int arr[][C] {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };
    int x = 29;
    // int brr[]{27,29,37,48};
    // int mid = 0;
    // int low = 0;
    // int high = C-1;
    // bool found = false;
    // int i = 0;
    // while(low < high) {
    //     mid = (low + high)/2;
    //     if(brr[mid] == x){
    //         found = !found;
    //         break;
    //     } else if(brr[mid] < x)
    //             low = mid;
    //         else
    //             high = mid;
    // }
    // if(found)
    //     cout<<"found at ("<< i <<", "<<mid <<')';
    // else
    //     cout <<"not found";
     isfound(arr, x);
    return 0;
}