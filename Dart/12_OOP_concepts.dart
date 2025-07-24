//polymorphism
//many forms
// Polymorphism allows you to use a single method name to perform different tasks based on the object that’s calling it.

// two types:
// Compile-time polymorphism (Method Overloading) — Not supported in Dart directly.
// Run-time polymorphism (Method Overriding) — Fully supported in Dart.

void main(){
    Animal a1 = Dog();
    Animal a2 = Cat();

    //notice:
    Object a3 = Dog(); // Object is the parent class of all classes in Dart

    a1.sound(); // Dog barks
    a2.sound(); // Cat meows

    //notice even though a1 and a2 are of type Animal, Dart calls the version 
    //of makeSound() from the actual object type (Dog or Cat), not from Animal
    //That’s polymorphism — same method, different behavior depending on the object

}

class Animal {
  void sound() {
    print("Animal makes a sound");
  }
}

class Dog extends Animal {
  @override
  void sound() {
    print("Dog barking");
  }
}

class Cat extends Animal {
  @override
  void sound() {
    print("Cat meaowss");
  }
}


//abstruction
// Abstraction is about hiding complex implementation details and 
//showing only the essential features of an object.
//it can be achieved using abstract classes and interfaces in Dart.

abstract class Shape {
  void draw(); // abstract method, no implementation
}


//encapsulation
// Encapsulation is about bundling the data (attributes) and methods (functions) 
//that operate on the data into a single unit, or class
//and restricting access to some of the object's components.

class _Person{  //private class
    String? _name;  //private variable

    void _getName(){    //private method
        print("Name is $_name");
    }
}


//inheritance
//already discussed