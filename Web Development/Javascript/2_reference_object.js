//reference types
//arrays, objects, functions


//objects
//key value pairs
//keys are always strings
//values can be of any type
let students = {
    name : "aleen",
    roll : 23,
    batch : 83
}

console.log(students);
console.log(typeof(students)); //object

console.log(students.name); //aleen
console.log(students["roll"]); //aleen


//why is it called value type(premitive) and reference type?
let x = 3;
let y = x; //copying value of x to y

x = 6
console.log(x); //6
console.log(y); //3
//value of y hasn't changed so it's called value type/premitive type


//but
let obj1 = {
    name : "aleen",
    roll : 23,
    batch : 83
}

let obj2 = obj1; //copying reference of obj1 to obj2

obj1.batch = 99;
console.log(obj1); //{ name: 'aleen', roll: 23, batch: 99 }
console.log(obj2); //{ name: 'aleen', roll: 23, batch: 99 }
//value of obj2 has also changed so it's called reference type