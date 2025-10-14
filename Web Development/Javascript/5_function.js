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


//returning function from a function
let add = function(a, b){
    return a + b;
}

let diff = function(a, b){
    return a - b;
}

function operate(func, a, b){
    return func(a, b);
}

//anonymous function : function without a name