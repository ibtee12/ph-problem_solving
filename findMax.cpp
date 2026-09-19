#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int> arr) {
    int maxVal = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    return maxVal;
}

int main() {
    vector<int> numbers = {3, 1, 7, 2, 9};

    cout << findMax(numbers) << endl;

    return 0;
}
