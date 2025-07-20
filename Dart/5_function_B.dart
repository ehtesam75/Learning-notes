(int, String) get(){
    //return positional record
    // Access by position (first, second, etc.), No field names, Order matters
    return (10, 'new testing');
}

({int age, String txt}) get_info(){
    //return named record
    // Access by name (field names), Self-documenting, Order doesn't matter
    return (age: 12, txt: "testing continue");
}

//return a fucntion
Function display(){
    return (){
        print("yooo");
    };
}


//arrow function
//is a shorthand for single expression functions
String random_stuff() => "aleen"; //returns "aleen"
void print_stuff() => print("hello"); //prints "hello"


//annonymous function
var annonymous_func = (){
    print("hey this is annonymous function");
};



void main(){
    var(age, text) = get();
    print(age);
    print(text);

    final stuff = get_info();
    print(stuff.txt);
    print(stuff.age);

    //return a function
    final store = display();
    store();

    //calling arrow function
    print(random_stuff());

    //calling annonymous function
    annonymous_func();

    ((){
        print("another annoymas function");
    })(); //calling annonymous function immediately
}