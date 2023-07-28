#include <iostream>
double mediun(int[], int[], int size_1, int size_2);
void fill_brr(int brr[], int arr[], int n);
using namespace std;
double get_median(int arr[], int n)
{
    if (n % 2 == 0)
    {
        return (arr[(n / 2)] + arr[(n / 2) + 1]) / 2;
    }
    else
        return arr[(n / 2)] / 2;
}
void show(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i << " : " << arr[i] << endl;
    }
}
int main()
{
    int arr[]{10, 20, 30, 40, 50};
    int arr2[]{5, 15, 25, 35, 45};
    int size_1 = sizeof(arr) / sizeof(arr[0]);
    int size_2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << mediun(arr, arr2, size_1, size_2);
}
void fill_brr(int brr[], int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        brr[arr[i]]++;
    }
}

double mediun(int arr[], int arr2[], int arr_1s, int arr_2s)
{
    int high = (arr[arr_1s - 1] >= arr2[arr_2s - 1]) ? arr[arr_1s - 1] : arr2[arr_2s - 1];
    int brr[high + 1]{0};
    int newarr[arr_1s + arr_2s];
    fill_brr(brr, arr, arr_1s);
    fill_brr(brr, arr2, arr_2s);
    int j = 0;
    for (int i = 0; i < high+1; i++)
    {
        if (brr[i] > 0)
        {
            newarr[j++] = i;
        }
    }
    return get_median(newarr, arr_1s + arr_2s);
}