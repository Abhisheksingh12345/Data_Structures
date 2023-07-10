#include<iostream>
#include<math.h>
void max(int left[], int right[], int size) {
    int arr[500]{0};
    int max = 0;
    int max_index = 0;
    for(int i = 0; i < size; i++) {
        for(int j = left[i]; j <= right[i]; j++) {
                arr[j]++;
        }
    }
    for (size_t i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if(max < arr[i]) {
            max = arr[i];
            max_index = i;
        }
    }
    
    std::cout <<max_index;
}

int main() {
    int left[]{1,2,5,15};
    int right[]{5,8,7,18};
    int size = sizeof(left)/sizeof(left[0]);
    max(left, right,size);
    // std::cout << 'hello world';

}