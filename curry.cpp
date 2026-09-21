#include <iostream>
#include <functional>
using namespace std;

auto curry(function<int(int, int)> fn) {
    return [fn](int a) {
        return [fn, a](int b) {
            return fn(a, b);
        };
    };
}

int main() {
    auto add = curry([](int a, int b) {
        return a + b;
    });

    cout << add(2)(3) << endl;

    return 0;
}
