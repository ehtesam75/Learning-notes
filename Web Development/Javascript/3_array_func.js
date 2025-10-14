//array and function are basically object

let a = [1,2,null,false,"aeeln"]; 
console.log(typeof(a)); //object

console.log(a); //[ 1, 2, null, false, 'aeeln' ]
console.log(a[2]); //null
console.log(a.length); //5

console.log(subject('english'))
//not errror : cuz its a function declaration and in creation phase of execution context, memory is allocated to functions with entire function body

function subject(sub_name){
    return "sub is " + sub_name;
}

console.log(subject("maths")); //sub is maths
console.log(subject("science")); //sub is science
console.log(typeof(subject)); //function


//hoisting
//hoisting : the process of allocating memory to variables and functions during the creation phase is called hoisting

//execution context : it is an abstract concept which holds the information about the environment within which the current code is being executed
//everytime i run a js code, an execution context is created
//initially theres a global execution context (GEC)
//and everytime a function is called, a new execution context is created and added to the top of the stack

//execution context has two phases
//1. creation/memory/variable envirnment phase
//2. thread of execution/code phase

//in creation phase, memory is allocated to variables and functions (this happens before the code is executed line by line )
//variables are initialized with undefined
//functions are initialized with the entire function body

console.log(num); //undefined
//undefined cuz in creation phase, memory is allocated to num and initialized with undefined
var num = 6;
console.log(num); //6


var b = 3;
console.log(b); //3
console.log(this.b); //3 in console and undefined in vs code
console.log(window.b); //3 in console error : ReferenceError: window is not defined in VS CODE
//cuz The window object exists only in browsers (it represents the browser window).
// In Node.js, there is no window object, so trying to access window.b results in a ReferenceError.
console.log(this == window); //true in console and also error in vs code
//this and window and global are same in browser
