#include <iostream>
#include <vector>
using namespace std;

void swap(int arr[], int num1_i, int num2_i)
{
    int temp = arr[num1_i];
    arr[num1_i] = arr[num2_i];
    arr[num2_i] = temp;
}
int selection_sort(int arr[], int size)
{
    bool response = false;
    int min_i = 0;
    for (int i = 0; i < size-1; i++)
    {
        min_i = i;
        for (int j = i; j < size; j++)
        {
            if (arr[min_i] > arr[j])
            {
                min_i = j;
                response = true;
            }
        }
        if (response)
            swap(arr, i, min_i);
        else
            break;
    }
    return 0;
}
int main()
{
    int arr[]{5, 1, 4, 8, 9, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, size);
    for (int i : arr)
    {
        cout << i << ' ';
    }
    return 0;
}