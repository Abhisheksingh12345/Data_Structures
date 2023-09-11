#include <iostream>
#include <vector>
using namespace std;
struct couple
{
    int x;
    int y;
};

bool cmp(couple x_1, couple x_2) {
    return x_1.x < x_2.x;
}
vector<pair<int, int>> gt_pairs(int[][2], int);
int main() {
    int arr[][2] {{1,3}, {2,4}, {5,7}, {6,8}};
    int size = sizeof(arr)/ sizeof(arr[0][0]);
    vector<pair<int, int>> new_arr = gt_pairs(arr, size);
    return 0;
}
vector<pair<int, int>> gt_pairs(int arr[][2], int size) {
    sort(arr, arr+size, cmp);

}