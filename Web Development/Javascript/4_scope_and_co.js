//3 ways to declare a variable
//1. var : can be accessed before initialization due to hoisting
//2. let : cannot be accessed before initialization
//3. const : cannot be accessed before initialization and value cannot be changed

//avoid using var

//temporal dead zone 
//  the time period between the start of the block and the initialization
//  of the variable is called temporal dead zone
//  during this time, if we try to access the variable, it will throw a ReferenceError

console.log(a); //undefined
var a = 5; 

// console.log(b);   //ReferenceError: Cannot access 'b' before initialization
let b = 6;  


//hoisting vs temporal dead zone
//hoisting : the process where declarations are conceptually moved to the top of their scope
//           - for `var` declarations the variable is initialized to `undefined` during creation phase
//           - function declarations are hoisted with their definition
//temporal dead zone : the time between entering a scope and the actual initialization of a `let` or `const`
//                     - accessing the variable in this period throws ReferenceError




//block scope vs function scope
//block scope : a variable declared inside a block {} cannot be accessed from outside the block
//               - let and const are block scoped
//function scope : a variable declared inside a function cannot be accessed from outside the function
//                 - var is function scoped


//block scope
{
    let x = 3;
    const y = 4;
    var z = 5;
}

// console.log(x); //ReferenceError: x is not defined
console.log(z); //5


//fucntion scope
function func(){
    let a = 1;
    const b = 2;
    var c = 3;
    console.log(a);
}

// console.log(c); //ReferenceError: c is not defined



//lexical scope
//lexical scope : a function defined inside another function can access the variables 
// of the outer function or a fucnction can acess the variable of global scope

function aleen(){
    console.log(str);
}

let str = "ehtesam";

aleen(); //ehtesam
