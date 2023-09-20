#include <iostream>
#include <vector>
using namespace std;
const int R = 5;
const int C = 4;

void spiral_traversal(int *arr[]) {
    int i = 0;
    int j = 0;
    int row = R;
    int col = C;
    while(row != col) {
        for(; j < col; j++)
            cout << arr[i][j];
        i++;
        for(; i < row; i++)
            cout << arr[i][j];
        j--;
        for(; j > -1; i--)
            cout << arr[i][j];
        i--;
        for(; i >row; i++)
            cout<< arr[i][j];
        row--;
        col--;
    }
}

int main(){
    int* arr[R];
    for(int i = 0; i < C; i++) 
        arr[i] = new int[C];
    int a = 0;
    cout << "normal traversal" << endl;
    for(int i = 0; i < R; i++) 
        for(int j = 0; j < C; j++) {
            arr[i][j] = ++a;
            cout << a <<' ';
        }
    cout << "Spiral Traversal" << endl;
    spiral_traversal(arr);

    return 0;
}