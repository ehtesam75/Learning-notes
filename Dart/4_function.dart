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

void print_name({required name,int? age, String address = "unknown"}){ //named arguments
    //age nullable, address has default value
    print(name);
}