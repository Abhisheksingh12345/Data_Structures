#include <iostream>
#include <string>
using namespace std;
int numJewelsInStones(string jewels, string stones) {
       int arr[256]{0};
       for(char c : jewels)
        arr[c]++;
        int count = 0;
        int low = 0;
        int high = stones.size()-1;
        while(low < high) {
            if(arr[stones[low]] > 0)
                count++;
            if(arr[stones[high]] > 0)
                count++;
            low++;
            high--;
        } 
        return count;
    }
int main() {

    cout<< numJewelsInStones("z","ZZ");
    return 0;
}