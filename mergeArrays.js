function mergeArrays(...arrays) {
    return arrays.reduce((acc, curr) => [...acc, ...curr], []);
}

console.log(mergeArrays([1, 2], [3, 4], [5]));
