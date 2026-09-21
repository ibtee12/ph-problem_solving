#include <iostream>
#include <map>
#include <functional>
#include <memory>
using namespace std;

auto memoize(function<int(int)> fn) {
    shared_ptr<map<int, int>> cache = make_shared<map<int, int>>();

    return [fn, cache](int n) {
        if (cache->find(n) != cache->end()) {
            return (*cache)[n];
        }

        int result = fn(n);
        (*cache)[n] = result;
        return result;
    };
}

int main() {
    auto memoAdd = memoize([](int n) {
        return n + 10;
    });

    cout << memoAdd(5) << endl;
    cout << memoAdd(5) << endl;

    return 0;
}
