#include <iostream>
#include <vector>
using namespace std;

// Problem 11: Find the Sum of an Array [Easy]
// Description: Write a function sumArray(arr) that returns the sum of all numbers in an array.
int sumArray(vector<int> arr) {
    int sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    cout << sumArray(numbers) << endl; // Output: 15

    return 0;
}
