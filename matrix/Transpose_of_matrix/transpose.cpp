#include <iostream>
#include <vector>
using namespace std;

void tranpose(int * arr[], int row) {
    

}
void traverse(int *arr[], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}
int main() {
    int* arr[4];
    for(int i = 0; i < 4; i++) 
        arr[i] = new int[4];
    int a = 0;
    for(int i = 0; i < 4 ;i++) 
        for(int j = 0; j < 4; j++)  
            arr[i][j] = ++a;
    cout <<"Normal Traversal" << endl;
    traverse(arr , 4);
    cout << "Transpose Traversal" << endl;
    tranpose(arr, 4);
    
    return 0;
}