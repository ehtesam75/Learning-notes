//function is javascript is called : first class citizen
//1. can be stored in a variable
//2. can be passed as an argument to another function
//3. can be returned from a function


function add(a, b){
    //here memory is allocated for the function (lies in the global section of inspect)
    return a + b;
}

console.log(add);    //[Function: add]
console.log(add(5, 6)); //11


//function expression
//when a function is stored in a variable

let sum = function (a, b){
    //here memory is allocated to sum variable (lies in script section of inspect)
    return a + b;
}

//now if we use var
var sumation = function (a, b){
    //here memory is allocated to sum variable (lies in global phase of inspect cuz we used var)
    return a + b;
}
console.log(sum);  //[Function: sum]
console.log(sum(3, 4));  //7


//higher order function : a function which takes another function as an argument 
// or returns a function as a return value

//returning function from a function
let addition = function(a, b){
    return a + b;
}

let diff = function(a, b){
    return a - b;
}

function operate(func, a, b){
    return func(a, b);
}

let xx = function(opeFunc, a, b){
    return opeFunc(a, b);
}

console.log(operate(diff, 9, 3)); //6
console.log(xx(addition, 10, 9)); //19



//more ways to write a funtion
let multiply = (a, b) => {
    return a * b;
}

//or

let mul = (a, b) => a * b;  //for single line expression
