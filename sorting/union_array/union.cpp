#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // 3 5 10 15 30 35 50
    int a[]{3, 5, 10, 10, 10, 15, 35, 50};
    int b[]{5, 10, 10, 15, 30};
    int a_n = sizeof(a) / sizeof(a[0]);
    int b_n = sizeof(b) / sizeof(b[0]);
    int i = 0;
    int j = 0;
    int k = -1;
    while (i < a_n && j < b_n)
    {
        if (a[i] < b[j])
        {
            if (k != a[i])
            {
                k = a[i];
                cout << k << ' ';
            }
            i++;
        }
        else
        {
            if (k != a[j])
            {
                k = a[j];
                cout << k << ' ';
            }
            j++;
        }
        if (i < a_n && j < b_n)
        {
            if (a[i] == b[j])
                i++;
        }
    }
}