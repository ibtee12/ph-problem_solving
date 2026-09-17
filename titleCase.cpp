#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string titleCase(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (i == 0 || str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
    }
    return str;
}

int main() {
    cout << titleCase("hello world") << endl;

    return 0;
}
