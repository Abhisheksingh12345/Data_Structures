#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<pair<int, int>> gt_pairs(vector<pair<int, int>>, int);
pair<int, int> getpair(int first, int second);

struct couple
{
    int x;
    int y;
};

bool cmp(couple x_1, couple x_2)
{
    return x_1.x < x_2.x;
}

int main()
{

    // int arr[][2] {{1,3}, {2,4}, {5,7}, {6,8}};
    // int size = sizeof(arr)/ sizeof(arr[0][0]);
    vector<pair<int, int>> arr;
    arr.push_back(getpair(2, 7));
    arr.push_back(getpair(3, 15));
    arr.push_back(getpair(5, 10));
    arr.push_back(getpair(18, 30));

    vector<pair<int, int>> new_arr = gt_pairs(arr, arr.size());
    for (int i = 0; i < new_arr.size(); i++)
    {
        cout << new_arr[i].first << ' ' << new_arr[i].second << endl;
    }

    return 0;
}

pair<int, int> getpair(int first, int second)
{
    pair<int, int> p;
    p.first = first;
    p.second = second;
    return p;
}

vector<pair<int, int>> gt_pairs(vector<pair<int, int>> arr, int size)
{
    // sort(arr.begin(), arr.end(), cmp);
    vector<pair<int, int>> utter;
    int start = min(arr[0].first, arr[0].second);
    int min_, max_ = 0;
    for (int i = 0; i < size - 1; i++)
    {
        max_ = max(max_, max(arr[i].first, arr[i].second));
        min_ = min(arr[i + 1].first, arr[i + 1].second);
        if (max_ < min_)
        {
            utter.push_back(getpair(start, max_));
            start = min(arr[i + 1].first, arr[i + 1].second);
        }
    }
    utter.push_back(getpair(start, max(arr[size - 1].first, arr[size - 1].second)));
    return utter;
}