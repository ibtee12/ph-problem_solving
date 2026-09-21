#include <iostream>
#include <functional>
#include <memory>
using namespace std;

struct Counter {
    function<void()> increment;
    function<void()> decrement;
    function<int()> getCount;
};

Counter makeCounter() {
    shared_ptr<int> count = make_shared<int>(0);

    Counter c;

    c.increment = [count]() {
        (*count)++;
    };

    c.decrement = [count]() {
        (*count)--;
    };

    c.getCount = [count]() {
        return *count;
    };

    return c;
}

int main() {
    Counter c = makeCounter();

    c.increment();
    c.increment();

    cout << c.getCount() << endl;

    return 0;
}
