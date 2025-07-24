// class modifiers
//classes can be modified with keywords that change their behavior.
//abstract, sealed, final, base, interface, mixin class are class modifiers

void main(){
    Animal a = Human();

    switch(a){
        case Dog():
            print('dog');
        case Cat():
            print('cat'); 
        case Human():
            print('human');
    }

    // Animal b = Animal(); //error; Animal is sealed class (implicitly abstract)

    Animal2(); //its a final class and can be instantiated
    Vehicle(); //Vehicle is a base class and can be instantiated
    Animal3(); //Animal3 is an interface class and can be instantiated

}

// abstract class Animal{}

//sealed class
sealed class Animal{}
//if we use sealed class, we must implement all the DIRECT subclasses (here, in switch case)
//otherwise it will throw an error
//sealed class is implicitly abstract
//it can't be extended or implemented outside of its library (means file)

class Human implements Animal{}
class Dog implements Animal{}
class Cat extends Animal{}
class cat2 implements Cat{} 
//cat2 is not a direct subclass of Animal, so it will not be matched in the switch case
//so no error will be thrown


//final class
//it can't be extended or implemented at all, not even within its own file.
//its used to create a class that is completely locked down.
//but it can be instantiated unlike sealed class

// No extends: You cannot inherit from a final class.
// No implements: You cannot use a final class as an interface.
// No with: You cannot use a final class as a mixin.

final class Animal2{}


//base class
//You CAN extend a base class.
// You CANNOT implement a base class
//it can be instantiated 

// By marking this as 'base', we force all children to use 'extends'.
base class Vehicle {
  void move() {
    print("movingg using its engine");
  }
}

//note: The child of a base class must also be base, final, or sealed.
base class Car extends Vehicle {
  void honk() {
    print("toooott");
  }
}

// You cannot implement a base class.
// This is forbidden because Bicycle would have to write its own `move` method,
// breaking the guarantee that all Vehicles move using the original engine logic.
/*
class Bicycle implements Vehicle {
  @override
  void move() {
    print("Moving by pedaling..."); // This is what 'base' prevents.
  }
}
*/


//interface class
//it defines the methods and properties that a class must implement
//it can't be extended but can be implemented outside of its library
//it can be instantiated unlike sealed class

interface class Animal3{}

//true interface class
abstract interface class Animal4{} //but this can't be instantiated as it is abstract


//mixin class
//already discussed
