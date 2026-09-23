function deepClone(obj) {
    if (obj === null || typeof obj !== "object") {
        return obj;
    }

    if (Array.isArray(obj)) {
        const copy = [];
        for (let i = 0; i < obj.length; i++) {
            copy.push(deepClone(obj[i]));
        }
        return copy;
    }

    const copy = {};
    for (let key in obj) {
        if (obj.hasOwnProperty(key)) {
            copy[key] = deepClone(obj[key]);
        }
    }
    return copy;
}

const a = { x: { y: 1 } };
const b = deepClone(a);
b.x.y = 99;

console.log(a.x.y);
console.log(b.x.y);
