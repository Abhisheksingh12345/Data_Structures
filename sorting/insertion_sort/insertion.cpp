#include <iostream>
#include <vector>
using namespace std;

// void swap(int arr[], int num1_i, int num2_i)
// {
//     int temp = arr[num1_i];
//     arr[num1_i] = arr[num2_i];
//     arr[num2_i] = temp;
// }
int insertion_sort(int arr[], int size)
{
    int temp = -1;
    int j = 0;
    for (int i = 1; i < size ; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            temp = arr[i];
            for (j = i - 1; j >= 0; j--)
            {
                if (temp > arr[j])
                {
                    arr[j + 1] = temp;
                    break;
                }
                else
                    arr[j + 1] = arr[j];
            }
            if (j == -1)
                arr[0] = temp;
        }
        for(int k = 0; k < size; k++) 
                cout << arr[k] << ' ';
        cout << endl;
    }
    return 0;
}
int main()
{
    int arr[]{20,5,40,60,10,30};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, size);
    for (int i : arr)
    {
        cout << i << ' ';
    }
    return 0;
}