#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<pair<int, int>> gt_pairs(int[][2], int);
pair<int ,int> getpair(int first, int second);

struct couple
{
    int x;
    int y;
};

bool cmp(couple x_1, couple x_2) {
    return x_1.x < x_2.x;
}

int main() {
    int arr[][2] {{1,3}, {2,4}, {5,7}, {6,8}};
    int size = sizeof(arr)/ sizeof(arr[0][0]);
    vector<pair<int, int>> new_arr = gt_pairs(arr, size);
    return 0;
}

pair<int , int> getpair(int first, int second) {
    pair<int, int> p;
    p.first = first;
    p.second = second;
    return p;
}

vector<pair<int, int>> gt_pairs(int arr[][2], int size) {
    sort(arr, arr+size, cmp);
    vector<pair<int, int>> utter;
    int start = min(arr[0][0], arr[0][1]);
    int min_, max_ = 0;
    for(int i = 0; i < size-1; i++) {
            max_ = max(max_, max(arr[i][0],arr[i][1]));
            min_ = min(arr[i+1][0],arr[i+1][1]);
            if(max_ < min_) {
                utter.push_back(getpair(start, max_));
                start = min(arr[i+1][0], arr[i+1][1]);
            }
    }
    utter.push_back(getpair(start, max(arr[size-1][0], arr[size-1][1])));
    return utter;
}