#include <iostream>
using namespace std;

bool isEven(int n) {
    if (n % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    
    cout << (isEven(4)? "True" : "False") << endl;
    cout << (isEven(7)? "True" : "False") << endl;

    return 0;
}
