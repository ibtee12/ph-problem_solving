#include <iostream>
using namespace std;

void swapValues(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int main() {
    int a = 5;
    int b = 10;

    swapValues(a, b);

    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
