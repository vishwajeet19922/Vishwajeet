//Write a C++ program to find the most occurring element in an array of integers.
//Name : Vishwajeet
//Reg. No. : 12018369

#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cout << "Input the number of elements in the array : " << endl;
    cin >> n; // Input the number of elements in the array
    int arr[n];
    cout << "Input the elements of the array : " << endl;
    for (int i = 0; i < n; i++) cin >> arr[i]; // Input the elements of the array

    unordered_map<int, int> count; // Create a hash table to store the count of each element
    for (int i = 0; i < n; i++) count[arr[i]]++;

    int maxCount = 0;
    int maxElement = -1;
    for (auto i : count) { // Iterate through the hash table
        if (i.second > maxCount) {
            maxCount = i.second;
            maxElement = i.first;
        }
    }

    cout << "The most occurring element is " << maxElement << " with a frequency of " << maxCount << endl;

    return 0;
}
