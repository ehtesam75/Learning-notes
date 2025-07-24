//class, constructor, final variable, instance variable, named parameters

void main(){
    Cookie(); //instance of cookie is created
    print(Cookie().shape);
    print('${Cookie().size} cm'); 
    Cookie().baking();

    //in the above lines i have create multiple Cookie class instance
    //so this is not efficient

    Cookie instan = Cookie();    
    instan.baking();
    print(instan.size);


    //using final variable
    final Cookie new_instance = Cookie();
    new_instance.size = 323.33;
    print(new_instance.size); //323.33
    //this changed cuz size is not final, only shape is final

    // new_instance = Cookie(); //now new_instance points to a new instance
    //this is an error; final variables cannot be reassigned


    Student s1 = Student(name: 'jamal', age: 33);
    print(s1.name); 
}


class Cookie{
    String shape = 'circle';
    double size = 15.2;

    void baking(){
        print("Baking is started");
    }
}


class Student{
    String name;
    int age;

    // Student(String name, int age) //error
    // In modern Dart with null safety, you cannot declare non-nullable fields (String name;) 
    // without initializing them immediately. The Dart analyzer isn't smart enough 
    // to see that you are definitely initializing them in the constructor body

    //The correct and most idiomatic way to fix this is to use the this
    //This tells Dart that the fields will be initialized immediately upon construction


    //Positional constructor
    // Student(this.name, this.age){
    //     print("constructor is called");
    //     print(this); //Instance of 'Student'; this refers to the current instance
    // } 

    //Constructor with Named Parameters
    Student({required this.name, required this.age}){
        print("constructor is called");
        print(this); //Instance of 'Student'; this refers to the current instance
    }  //correct way
    //this denotes Automatically take the value passed for this argument and 
    //assign it to the instance variable with the same name

    void is_good(){
        print("he is goood");
    }
}