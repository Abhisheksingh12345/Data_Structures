#include <iostream>
#include <vector>
const int _C = 4;
using namespace std;

void snake(int *arr[], int row)
{
    int j = 0;
    for (int i = 0; i < row; i++)
    {
        if (j == 0)
        {
            while (j < _C)
            {
                cout << arr[i][j] << " ";
                j++;
            }
            j--;
        }
        else
        {
            while (j > -1)
            {
                cout << arr[i][j] << " ";
                j--;
            }
            j++;
        }
        cout << endl;
    }
}
void traverse(int *arr[], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < _C; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    //demo();
    int *arr[4];
    for (int i = 0; i < 4; i++)
        arr[i] = new int[_C];
    int a = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < _C; j++)
        {
            arr[i][j] = ++a;
        }
    }
    cout << "Normal Traverse" << endl;
    traverse(arr, 4);
    cout << "Snake Traverse" << endl;
    snake(arr, 4);
    return 0;
}
