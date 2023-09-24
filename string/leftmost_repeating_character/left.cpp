#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
int left_most_repeating_char_index(string str);
int main() {
   string str = "abcd";
    cout << left_most_repeating_char_index(str);
    return 0;
}
int left_most_repeating_char_index(string str) {
    // Method 1
    // int arr[256]{0};
    // for(auto i : str)
    //     arr[(int)i]++;
    // for(int i = 0; i < str.size(); i++) 
    //     if(arr[(int)str[i]] > 1)
    //         return i;
    // return -1;
    //method 2
    unordered_map<char, int> map;
    int repeating = str.size()-1;
    for(int i = 0; i < str.size(); i++) {
        if(map.find(str[i]) != map.end())
            repeating = min(repeating, map[str[i]]);
        map[str[i]] = i;
    }
    return (repeating != str.size()-1)? repeating : -1;
    

}
