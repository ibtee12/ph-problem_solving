#include <iostream>
using namespace std;

double toFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    cout << toFahrenheit(0) << endl;
    cout << toFahrenheit(100) << endl;

    return 0;
}
