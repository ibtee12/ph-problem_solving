#include <iostream>
#include <vector>
using namespace std;

vector<int> flattenArray(vector<vector<int>> arr) {
    vector<int> flat;

    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            flat.push_back(arr[i][j]);
        }
    }

    return flat;
}

int main() {
    vector<vector<int>> nested = {
        {1},
        {2, 3},
        {4, 5}
    };

    vector<int> result = flattenArray(nested);

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
