#include <iostream>
#include <math.h>
using namespace std;
// int* merge(int arr[], int arr2[], int size1, int size2);

// int* merge(int arr[], int brr[],  int size1, int size2) {
// int new_arr[size1 + size2] {0};
// int i = 0;
// int j = 0;
// int k = 0;
// while(i < size1 || j < size2) {
//     if(arr[i] >= brr[j]) {
//         new_arr[k] = brr[j];
//         j++;
//     } else {
//         new_arr[k] = arr[i];
//         i++;
//     }
//     if (i == size1) i = --size1;
//     if (j == size2) j = --size2;
//     k++;
// }
// return new_arr;
// }

// void display(int new_arr[], int size) {
//     for(int i = 0; i  < size; i++) {
//         cout << new_arr[i] << ' ';
//     }
// }
int main()
{
    int arr[] = {10, 20, 35};
    int brr[] = {5, 50, 50};
    int size1 = sizeof(arr) / sizeof(arr[0]);
    int size2 = sizeof(brr) / sizeof(brr[0]);
    int new_arr[size1+size2] {-1};
    int i = 0;
    int j = 0;
    int k = 0;
    while (k < size1 + size2)
    {
        if (arr[j] <= brr[i])
        {
            new_arr[k] = arr[j];
            j++;
        }
        else
        {
            new_arr[k] = brr[i];
            i++;
        }
        if (i == size1)
            i = --size1;
        if (j == size2)
            j = --size2;
        k++;
    }
    for(int i : new_arr) 
        cout << i << ' ';
    // int new_arr[] = merge(arr, arr2, size, size2);
    // display(new_arr, (size+size2));
}