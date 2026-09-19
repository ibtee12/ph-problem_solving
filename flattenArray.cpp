#include <iostream>
#include <vector>
using namespace std;

// Problem 14: Flatten a Nested Array [Medium]
// Description: Write a function flattenArray(arr) that flattens one level of a nested array.
// In C++, a nested array is represented using a 2D vector: vector<vector<int>>
vector<int> flattenArray(vector<vector<int>> arr) {
    vector<int> flat;

    // Loop through each inner vector
    for (int i = 0; i < arr.size(); i++) {
        // Loop through each element inside the inner vector
        for (int j = 0; j < arr[i].size(); j++) {
            flat.push_back(arr[i][j]);
        }
    }

    return flat;
}

int main() {
    // Nested structure representing: [1, [2, 3], [4, 5]]
    vector<vector<int>> nested = {
        {1},
        {2, 3},
        {4, 5}
    };

    vector<int> result = flattenArray(nested);

    // Print result as [1, 2, 3, 4, 5]
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
