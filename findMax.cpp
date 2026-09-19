#include <iostream>
#include <vector>
using namespace std;

// Problem 12: Find Maximum Value in Array [Easy]
// Description: Write a function findMax(arr) that returns the largest number in an array without using built-in max.
int findMax(vector<int> arr) {
    // Assume the first element is the largest initially
    int maxVal = arr[0];

    // Loop through the rest of the array
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i]; // Update maxVal if a larger number is found
        }
    }

    return maxVal;
}

int main() {
    vector<int> numbers = {3, 1, 7, 2, 9};

    cout << findMax(numbers) << endl; // Output: 9

    return 0;
}
