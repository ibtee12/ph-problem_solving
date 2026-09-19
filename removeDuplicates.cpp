#include <iostream>
#include <vector>
using namespace std;

vector<int> removeDuplicates(vector<int> arr) {
    vector<int> uniqueArr;

    for (int i = 0; i < arr.size(); i++) {
        bool isDuplicate = false;

        for (int j = 0; j < uniqueArr.size(); j++) {
            if (arr[i] == uniqueArr[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            uniqueArr.push_back(arr[i]);
        }
    }

    return uniqueArr;
}

int main() {
    vector<int> numbers = {1, 2, 2, 3, 3, 4};
    vector<int> result = removeDuplicates(numbers);

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
