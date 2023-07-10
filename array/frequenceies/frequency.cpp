#include<iostream>
using namespace std;

void fre(int arr[],int n) {
int rang  = 1;
for (size_t i = 1; i < n; i++)
{
    if(arr[i] != arr[i-1]) {
        cout << arr[i-1] <<" - "<< rang << endl;
        rang = 0;
    }
    rang++;
}
cout<< arr[n-1] << " - " << rang;
}
int main() {
    int arr[] {40,50,50,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    fre(arr,size);
    return 0;
}