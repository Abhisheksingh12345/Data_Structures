#include <iostream>
using namespace std;

void flips(int arr[], int size){
    int group_0 = 0;
    int group_1 = 0;
    for(int i = 1; i < size; i++){
        if(arr[i] == 1) {
            if(arr[i]!= arr[i-1])
                group_0++;
        }else {
            if(arr[i]!= arr[i-1])
                group_1++;
        }
    }
    if(arr[size-1] == 0 && arr[size-1]!= arr[size-2])
        group_0++;
    if(arr[size-1] == 1 && arr[size-1]!= arr[size-2])
        group_1++;

    int min_grup = min(group_0,group_1);
    bool start = true;
    //1,1,0,0,0,0,1
    if (min_grup == 0) {
        for(int i = 0; i < size; i++) {
            if(arr[i]==0 & start ) {
                cout<<"From "<< arr[i] << " to ";
                start = false;
            } else{
                if(!start){
                cout<<arr[i]<< endl;
                start = true;
                }
            }
        }
        
    } else {
        for(int i = 0; i < size; i++) {
            if(arr[i]==1 & start ) {
                cout<<"From "<< arr[i]+1 << " to";
                start = false;
            }
            if(arr[i]==0 & !start){
                cout<<arr[i]+1<< endl;
                start = true;
            }
        }

    }
}


int main() {
    int arr[]{1,1,0,0,0,0,1};
    int size = sizeof(arr)/ sizeof(arr[0]);
    flips(arr, size);
}