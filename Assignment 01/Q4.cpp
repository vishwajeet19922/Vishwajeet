//Write a C++ program to find k largest elements in a given array of integers.
//Name : Vishwajeet
//Reg. No. : 12018369

#include <iostream>
#include <algorithm>
using namespace std;

void kLargest(int arr[], int n, int k) {
    sort(arr, arr+n, greater<int>());
    cout << "The " << k << " largest elements in the array are: ";
    for (int i=0; i < k; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i=0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;
    kLargest(arr, n, k);
    return 0;
}
