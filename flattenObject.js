function flattenObject(obj) {
    const result = {};

    function helper(current, prefix) {
        for (let key in current) {
            if (current.hasOwnProperty(key)) {
                const newKey = prefix ? prefix + "." + key : key;

                if (typeof current[key] === "object" && current[key] !== null && !Array.isArray(current[key])) {
                    helper(current[key], newKey);
                } else {
                    result[newKey] = current[key];
                }
            }
        }
    }

    helper(obj, "");
    return result;
}

const input = { a: { b: { c: 1 } } };
console.log(flattenObject(input));
