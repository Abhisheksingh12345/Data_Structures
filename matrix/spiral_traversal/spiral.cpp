#include <iostream>
#include <vector>
using namespace std;
const int R = 5;
const int C = 4;

void spiral_traversal(int *arr[]) {
    int top = 0;
    int bottom = R-1;
    int right = C-1;
    int left = 0;
    while(top !=  bottom || right != left) {
        for(int i = top; i <= right; i++)
            cout << arr[top][i] << " ";
        top++;
        for(int i = top; i <= bottom; i++)
            cout << arr[i][right] <<' ';
        right--;
        for(int i =  right; i <= left; i--)
            cout << arr[bottom][i]<< ' ';
        bottom--;
        for(int i = bottom; i >= top; i--)
            cout << arr[i][left]<< ' ';
        left++;
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