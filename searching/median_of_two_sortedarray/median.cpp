#include<iostream>
double mediun(int [], int [], int size_1, int size_2);
void fill_brr(int brr[], int arr[], int n);
using namespace std;
int main() {
    int arr[] {10,20,30,40,50};
    int arr2[] {5,15,25,35,45};
    int size_1 = sizeof(arr)/ sizeof(arr[0]);
    int size_2 = sizeof(arr2)/ sizeof(arr2[0]);
    cout << mediun(arr, arr, size_1, size_2);
}
void fill_brr(int brr[], int arr[], int n) {
    for(int i =0; i < n; i++) {
        brr[arr[i]]++;
    }
} 
double mediun(int arr[], int arr2[], int s1, int s2) {
    int brr[500] {0};
    fill_brr(brr, arr, s1);
    fill_brr(brr, arr2, s2);
    

}