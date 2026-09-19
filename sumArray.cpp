#include <iostream>
#include <vector>
using namespace std;

int sumArray(vector<int> arr) {
    int sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    cout << sumArray(numbers) << endl;

    return 0;
}
