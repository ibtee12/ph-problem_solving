function safeJsonParse(str) {
    try {
        return JSON.parse(str);
    } catch (error) {
        return null;
    }
}

console.log(safeJsonParse('{"a":1}'));
console.log(safeJsonParse('bad json'));
