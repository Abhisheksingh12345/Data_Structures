#include <iostream>
using namespace std;

int first_occurrance(int[], int, int);

int first_occurrance(int arr[], int size, int value)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == value)
        {
            if (mid == 0)
                return 0;
            do
            {
                if (mid == 0 || arr[mid-1] != value)
                    return mid;
                mid--;
            } while (arr[mid] == value);
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
    return -1;
}

int main()
{
    int arr[]{1, 10, 10, 10, 10, 20, 20, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 1;
    cout << first_occurrance(arr, size, value);
}