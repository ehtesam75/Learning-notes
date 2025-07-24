//camalCase (newTest): is used for variable names, function names, and method names
//PascalCase (NewTest): is used for class names, enum names, and type names

void main(){
    // variable
    print('3' * 10);  //3333333333
    dynamic value = 'hello dart'; // works like auto keyword in cpp
    print(value.runtimeType); // prints the type of value; string
    print((value as String).length); //before using 'as string' we couldn't access the string's properties (like .length)
    // 'as' is used for type casting
    print(value);

    int num = 10;
    print(num.bitLength); //num of bits

    String v = 'heooee';
    print(v.isEmpty);

    //string interpolation; means inserting variables into strings
    String s = 'dart programming';
    s = '$s is fun'; //dart programming is fun
    print(s);
    s = 'so ${s.length} is the length';
    print(s); //23

    //note: avoid string concatenation with + operator as it is less efficient
    //cuz it creates a new string object each time

    s = '\$ is a doller sign';  //escaping the $ sign


    //multiline string
    String str = ''' first line

    third line''';
    print(str);


    //note: diff between var and dynamic
    //var is statically typed (type inferred at compile time and cannot change)
    //dynamic is dynamically typed (type can change at runtime)  
    var x = 32;  //var auto identifies the type just like dynamic
    // x = 'hello'; //error
    dynamic y = 32;
    y = 'hello'; //good


    // note: diff between const and final
    // const is compile-time constant (value must be known at compile time)
    // final is runtime constant (value can be set at runtime but cannot change after that)

    // const d = DateTime.now(); //error
    final e = DateTime.now(); //good
    print(e);
    //this happens because const requires a compile time constant value and the current
    //date and time is only known at runtime

    //btw this will also work
    final DateTime f = DateTime.now(); // here datetime is variable type
    final int g = 10;
    //final and const automatically infer the type


    //non nullable and nullable
    //OPTIONAL variable : optional variables refer to variables that can be null
    //Since Dart has null safety, variables are non-nullable by default.
    String dd = 'ehte ';
    // int age = null; //error; 
    int? age = null; // ? makes it nullable; means it CAN BE null
    //btw 
    int? age2; //this is also the same as above; age is nullable

    final some_age = null;  //note that here some_age is dynamic;
    final some_age2 = 10; // here some_age2 is int
    print(some_age2.bitLength); // can access properties of int
    // some_age.bitLength; //error; cannot access properties of null
    //so final, var is not recommended for nullable variables


    //diff between var and final
    //var : Mutable: can change its value (reassign it) after it's created.
    //final : Immutable: can only set its value once. After initialization, it cannot be changed.
    var aleen = 3;
    aleen = 23; //good
    print(aleen);

    // aleen = "ehe";   //error aleen is not String

    final joyi = 23;
    // joyi = 2;  //error final is immutable
    
}
