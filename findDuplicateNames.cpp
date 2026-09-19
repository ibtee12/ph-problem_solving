#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

struct Person {
    string name;
};

vector<string> findDuplicateNames(vector<Person> arr) {
    map<string, int> freq;
    for (int i = 0; i < arr.size(); i++) {
        freq[arr[i].name]++;
    }

    vector<string> duplicates;
    for (auto pair : freq) {
        if (pair.second > 1) {
            duplicates.push_back(pair.first);
        }
    }

    return duplicates;
}

int main() {
    vector<Person> people = {
        {"Ali"},
        {"Sara"},
        {"Ali"}
    };

    vector<string> duplicates = findDuplicateNames(people);

    cout << "[";
    for (int i = 0; i < duplicates.size(); i++) {
        cout << "'" << duplicates[i] << "'";
        if (i < duplicates.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
