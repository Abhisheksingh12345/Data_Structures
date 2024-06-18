#include <string>
#include <iostream>
#include <limits.h>
using namespace std;
int non_repeating_first_char_index(string);
int main() {
    string str = "geeksforgeeks";
    cout << non_repeating_first_char_index(str);
    return 0;
}
int non_repeating_first_char_index(string str) {
        int arr[256]{-1};
        fill(arr,arr+ 256, -1);
        for(int i = 0; i < str.size(); i++) {
            if(arr[str[i]] == -1)
                arr[str[i]] = i;
            else
                arr[str[i]] = -2;
        }
        int res = INT_MAX;
        for(int i = 0; i < 256; i++)
            if(arr[i] > -1)
                res = min(res, arr[i]);
        return (res == INT_MAX) ? -1 : res;
    }