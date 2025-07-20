void main(){
    String s = "ehet";
    s.substring(1, 3); //from index 1 to index 3 (exclusive)
    s.substring(1); //from 1 to end

    //conditional expression, break, continue
    //same as cpp


    //function
    print(getdata()); //(20, hello)
    print(getdata().$1); //20
    print(getdata().$2); //hello
    //this $1... is knowns as getters in dart

    var (age, name) = getdata();    //another way
    print(age); //20

    print(get()); //the string
    print(get()?.length); //13

    print(func("eleen"));

    //named arguments
    //means i can pass arguments in any order
    print_name(age: null, name : "aleen");

    //positional and named arguments
    functions('aleen', true, age: 29 );
}


//function declaration

(int, String) getdata(){
    return (20, 'hello');
}

String? get(){
    return "the string"; //or return null
}

int func(data){ //here data is of type dynamic;
    return data.length;
}

//function with named arguments
void print_name({required name, int? age, String address = "unknown"}){ //named arguments
    //age nullable (this means user may or may pass as argument), address has default value
    print(name);
}

//function with positional and named arguments
void functions(String name, bool valid, {required int age, String? address}){
    print("name is : $name and age is $age");
}