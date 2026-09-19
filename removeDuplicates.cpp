#include <iostream>
#include <vector>
using namespace std;

// Problem 13: Remove Duplicates from Array [Easy]
// Description: Write a function removeDuplicates(arr) that returns a new array with duplicate values removed.
vector<int> removeDuplicates(vector<int> arr) {
    vector<int> uniqueArr;

    for (int i = 0; i < arr.size(); i++) {
        bool isDuplicate = false;

        // Check if arr[i] already exists in uniqueArr
        for (int j = 0; j < uniqueArr.size(); j++) {
            if (arr[i] == uniqueArr[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If not found in uniqueArr, add it
        if (!isDuplicate) {
            uniqueArr.push_back(arr[i]);
        }
    }

    return uniqueArr;
}

int main() {
    vector<int> numbers = {1, 2, 2, 3, 3, 4};
    vector<int> result = removeDuplicates(numbers);

    // Print result as [1, 2, 3, 4]
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
