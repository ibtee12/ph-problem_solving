#include <iostream>
using namespace std;

void swapValues(int &a, int &b) {
    a = a + b;  //15
    b = a - b;  //15-10=5
    a = a - b;  //15-5=10
}

int main() {
    int a = 5;
    int b = 10;

    swapValues(a, b);

    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
