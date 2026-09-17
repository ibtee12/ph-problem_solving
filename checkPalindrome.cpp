#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    if (str == reversed) {
        return true;
    } else {
        return false;
    }
}

int main() {
    cout << boolalpha;
    cout << isPalindrome("racecar") << endl;
    cout << isPalindrome("hello") << endl;

    return 0;
}
