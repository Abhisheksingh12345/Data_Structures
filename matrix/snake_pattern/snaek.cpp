#include <iostream>
#include <vector>
const int _C = 4;
using namespace std;

void snake(int *arr[][_C], int row)
{
}
void traverse(int *arr[][_C], int row) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j<  _C; j++)
            cout << arr[i][j] <<" ";
        cout << endl;
    }
}
int maine()
{
    int *arr[4];
    for (int i = 0; i < 4; i++)
        arr[i] = new int[_C];
    int a = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr[i][j] = ++a;
        }
    }
    cout << "Normal Traverse" << endl;
    traverse();
    cout << "Snake Traverse" << endl;
}
