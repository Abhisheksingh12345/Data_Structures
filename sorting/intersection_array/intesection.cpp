#include <iostream>
#include <vector>
using namespace std;

int main()
{
//     int a[]{3, 5, 10, 10, 10, 15, 35, 50};
//     int b[]{5, 10, 10, 15, 30};
    int a[]{1,20,20,40,60};
    int b[]{2,20,20,20};
    int a_n = sizeof(a) / sizeof(a[0]);
    int b_n = sizeof(b) / sizeof(b[0]);
    int i = 0;
    int j = 0;
    int k = -1;
    while (i < a_n && j < b_n)
    {
        if (a[i] < b[j])
            i++;
        else
            j++;
        if (a[i] == b[j])
        {
            if (k != a[i])
            {
                k = a[i];
                cout << k << ' ';
            }
            i++;
            j++;
        }
    }
}