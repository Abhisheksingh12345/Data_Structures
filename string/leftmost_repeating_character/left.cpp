#include <iostream>
#include <vector>
#include <string>
using namespace std;
int left_most_repeating_char_index(string str);
int main() {
   string str = "geeksgforgeeks";
    cout << left_most_repeating_char_index(str);
    return 0;
}
int left_most_repeating_char_index(string str) {
    int arr[256]{0};
    for(auto i : str)
        arr[(int)i]++;
}
