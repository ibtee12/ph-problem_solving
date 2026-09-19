#include <iostream>
#include <map>
#include <string>
using namespace std;

int countProperties(map<string, int> obj) {
    int count = 0;
    for (auto pair : obj) {
        count++;
    }
    return count;
}

int main() {
    map<string, int> obj = {
        {"a", 1},
        {"b", 2},
        {"c", 3}
    };

    cout << countProperties(obj) << endl;

    return 0;
}
