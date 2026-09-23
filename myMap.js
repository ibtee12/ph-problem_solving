function myMap(arr, callback) {
    const result = [];

    for (let i = 0; i < arr.length; i++) {
        result.push(callback(arr[i], i, arr));
    }

    return result;
}

const numbers = [1, 2, 3];
const doubled = myMap(numbers, x => x * 2);
console.log(doubled);
