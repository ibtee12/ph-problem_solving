#include <iostream>
#include <map>
#include <string>
using namespace std;

map<string, int> mergeObjects(map<string, int> obj1, map<string, int> obj2) {
    map<string, int> result = obj1;

    for (auto pair : obj2) {
        result[pair.first] = pair.second;
    }

    return result;
}

int main() {
    map<string, int> obj1 = {{"a", 1}};
    map<string, int> obj2 = {{"b", 2}};

    map<string, int> merged = mergeObjects(obj1, obj2);

    cout << "{";
    int i = 0;
    for (auto pair : merged) {
        cout << pair.first << ": " << pair.second;
        if (i < merged.size() - 1) {
            cout << ", ";
        }
        i++;
    }
    cout << "}" << endl;

    return 0;
}
