#include <string>
#include <iostream>
using namespace std;
int non_repeating_first_char_index(string);
int main() {
    string str = "geeksforgeeks";
    cout << non_repeating_first_char_index(str);
    return 0;
}