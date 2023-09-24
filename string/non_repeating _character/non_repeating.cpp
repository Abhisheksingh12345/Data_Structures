#include <string>
#include <iostream>
using namespace std;
int non_repeating_first_char_index(string);
int main() {
    string str = "geeksforgeeks";
    cout << non_repeating_first_char_index(str);
    return 0;
}
int non_repeating_first_char_index(string str) {
    int non_repeating = -1;
    bool arr[256]{};
    for(int i = str.size() -1; i > -1; i--) {
        if(!arr[str[i]])
            non_repeating = i;
        else   
            arr[str[i]] = true;
    }
    return non_repeating;
}