function groupBy(arr, key) {
    return arr.reduce((acc, item) => {
        const groupKey = item[key];

        if (!acc[groupKey]) {
            acc[groupKey] = [];
        }

        acc[groupKey].push(item);
        return acc;
    }, {});
}

const items = [
    { type: "fruit", name: "apple" },
    { type: "veg", name: "carrot" },
    { type: "fruit", name: "mango" }
];

console.log(groupBy(items, "type"));
