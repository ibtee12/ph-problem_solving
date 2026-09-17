#include <iostream>
#include <string>
using namespace std;

string reverseString(string str) {
    string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

int main() {
    cout << reverseString("hello") << endl;
    cout << reverseString("world") << endl;

    return 0;
}
