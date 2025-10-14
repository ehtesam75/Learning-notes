//can view the output by going to live website's console (of inspect)
// debugger (of inspect) help to find bugs by using breakpoints

//premitive  or value types
//string, number, boolean, null, undefined, symbol, bigint

//javascript is dynamically typed language
//cuz we can update any variable with any type of value unlike in c++ or java (these are statically typed languages)


let x = "aleen";
console.log(x);
console.log(typeof(x));

x = undefined; //undefined is the default value of a variable ; NOT RECOMMENDED
console.log(x);     //undefined
console.log(typeof(x)); //undefined

let y = 3;
console.log(y);
console.log(typeof(y));     //number

let z = 2.3
console.log(typeof(z))      //number

let a;
console.log(typeof(a)); //undefined
a = "aleen";
console.log(typeof(a));

let b = null;       //null is used to not put any value
console.log(b); //null
console.log(typeof(b)); //object 

//bigint
//used for large numbers
let num = BigInt(1234567890123456789012345678901234567890);
console.log(num);
console.log(typeof(num));



