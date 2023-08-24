#include <iostream>
#include <vector>
using namespace std;

void swap(int arr[], int num1_i, int num2_i)
{
    int temp = arr[num1_i];
    arr[num1_i] = arr[num2_i];
    arr[num2_i] = temp;
}
int insertion_sort(int arr[], int size)
{

    return 0;
}
int main()
{
    int arr[]{5, 1, 4, 8, 9, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, size);
    for (int i : arr)
    {
        cout << i << ' ';
    }
    return 0;
}