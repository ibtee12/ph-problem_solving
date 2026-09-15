#include <iostream>
#include <string>
using namespace std;

string checkSign(int n) {
    if (n > 0) {
        return "positive";
    } else if (n < 0) {
        return "negative";
    } else {
        return "zero";
    }
}

int main() {
    cout << checkSign(-5) << endl;
    cout << checkSign(0) << endl;

    return 0;
}
