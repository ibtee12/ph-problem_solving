#include <iostream>
#include <vector>
using namespace std;

// Problem 15: Chunk an Array [Medium]
// Description: Write a function chunkArray(arr, size) that splits an array into chunks of a given size.
vector<vector<int>> chunkArray(vector<int> arr, int size) {
    vector<vector<int>> chunks;
    vector<int> currentChunk;

    for (int i = 0; i < arr.size(); i++) {
        currentChunk.push_back(arr[i]);

        // If current chunk reaches the required size or we are at the last element
        if (currentChunk.size() == size || i == arr.size() - 1) {
            chunks.push_back(currentChunk);
            currentChunk.clear(); // Reset chunk for next group
        }
    }

    return chunks;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    int chunkSize = 2;

    vector<vector<int>> result = chunkArray(numbers, chunkSize);

    // Print result as [[1, 2], [3, 4], [5]]
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << "[";
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j];
            if (j < result[i].size() - 1) {
                cout << ", ";
            }
        }
        cout << "]";
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
