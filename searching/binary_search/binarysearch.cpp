#include <iostream>
int recur_binary_search(int[], int, int);
int recur_bs(int[], int , int, int, int);
using namespace std;

int binary_search(int arr[], int value, int size)
{
    // this is will not handel failiour case
    // int size = 6;
    // if (arr[0] == value)
    //     return 0;
    // if (arr[size - 1] == value)
    //     return 0;
    // int mid = (size - 1) / 2;
    // int last = size - 1;
    // while (mid != last && mid != 0)
    // {
    //     if (arr[mid] == value)
    //         return mid;
    //     if (arr[mid] < value)
    //         mid =  mid + (last - mid) / 2;
    //     if (arr[mid] > value)
    //     {
    //         last = mid;
    //         mid = mid / 2
    //     }
    // }
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == value)
            return mid;
        else if (arr[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    int arr[]{10, 20, 30, 40, 50, 60};
    int value = 55;
    int size = sizeof(arr) / sizeof(arr[0]);
  //  cout << binary_search(arr, value, size);
    cout << recur_binary_search(arr, value, size);

    return 0;
}
int recur_binary_search(int arr[], int value, int size)
{
    return recur_bs(arr, value, 0, 0, size - 1);
}
int recur_bs(int arr[], int value, int mid, int low, int high)
{
    if (low > high)
        return -1;
    mid = (low + high) / 2;
    if (arr[mid] == value)
        return mid;
    else if (arr[mid] > value)
        return recur_bs(arr, value, mid, low, high - 1);
    else
        return recur_bs(arr, value, mid, low + 1, high);
}