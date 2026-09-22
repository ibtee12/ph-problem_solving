const user = {
    firstName: "Sara",
    lastName: "Khan",
    age: 25
};

const { firstName: name, lastName, age } = user;

console.log(name);
console.log(lastName);
console.log(age);
