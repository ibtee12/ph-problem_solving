#include <iostream>
#include <map>
#include <string>
using namespace std;

map<int, string> invertObject(map<string, int> obj) {
    map<int, string> inverted;

    for (auto pair : obj) {
        inverted[pair.second] = pair.first;
    }

    return inverted;
}

int main() {
    map<string, int> obj = {
        {"a", 1},
        {"b", 2}
    };

    map<int, string> inverted = invertObject(obj);

    cout << "{";
    int i = 0;
    for (auto pair : inverted) {
        cout << pair.first << ": '" << pair.second << "'";
        if (i < inverted.size() - 1) {
            cout << ", ";
        }
        i++;
    }
    cout << "}" << endl;

    return 0;
}
