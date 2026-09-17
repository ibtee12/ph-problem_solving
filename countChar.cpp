#include <iostream>
#include <string>
using namespace std;

int countChar(string str, char ch) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    cout << countChar("banana", 'a') << endl;

    return 0;
}
