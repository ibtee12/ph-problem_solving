function memoize(fn) {
    const cache = {};

    return function(n) {
        if (n in cache) {
            return cache[n];
        }

        const result = fn(n);
        cache[n] = result;
        return result;
    };
}

const memoAdd = memoize(n => n + 10);
console.log(memoAdd(5));
console.log(memoAdd(5));
