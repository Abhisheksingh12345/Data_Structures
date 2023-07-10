#include <iostream>
using namespace std;

int cout_occurrences(int arr[], int size, int value)
{
    int low = 0;
    int high = size - 1;
    int count = -2;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == value)
        {   count++;
            int left = mid;
            int right = mid;
            while(arr[left] == value || arr[right] == value) {
                if (arr[left] == value) {
                    left--;
                    count++;
                }
                if(arr[right] == value) {
                    right++;
                    count++;
                }
            }
        }
        else if (arr[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return count;
}

int main()
{
    int arr[]{1, 10, 10, 10, 10, 20, 20, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 1;
    cout << cout_occurrences(arr, size, value);
}