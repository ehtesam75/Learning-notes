//implements
//a class can implement multiple interfaces
//interface: is a contract that a class must follow
//It's a promise that your class will have all the same public methods and properties 
//as the interface, but you have to write the code for all of them yourself

//interface
// An interface is like a contract or a blueprint.
// It defines what methods a class must have, but not how they work.


class Vehicle{
    //this is an interface
    //it defines the methods and properties that a class must implement
    //an abstract class can also be used as an interface
    int speed = 5;

    void accelerate(){
        speed += 5;
    }
}

class flyable{
    void fly(){
        print("Flying");
    }
}

class swimable{
    void swim(){
        print("Swimming");
    }
}

// implement example
// class Car implements Vehicle{
//     @override
//     int speed = 10;

//     @override
//     void accelerate() {
//         speed += 10;
//     }
// }

class Car extends Vehicle implements flyable, swimable {
    //car inherits from Vehicle and implements flyable, swimable interfaces
    //dart doesn't support multiple inheritance
    //here its single inheritance + multiple interface implementation

    @override
    void fly(){
        print("Car can fly!!");
    }

    @override
    void swim(){
        print("Car can swim!!");
    }

    // It is a strong and highly recommended best practice to mark each of these 
    // methods with the @override annotation in implements.
}



//diff between extends and implements (from chatbot)

// extends is like inheriting a real, working car.
// You get a fully built Vehicle from your parents.
// It already has an engine (speed) and an accelerator pedal (accelerate() method).
// You can use it exactly as it is.
// If you want, you can repaint it or tune the engine (this is like using @override), 
// but you start with a working car. You get the code for free.


// implements is like getting the car's bl.ueprint.
// You get a piece of paper that says "To be called a Vehicle, you must have a property called speed and a method called accelerate()."
// The blueprint doesn't give you the parts. It just gives you the rules.
// You have to build the engine (speed) and the accelerator pedal (accelerate()) yourself, from scratch. You must write all the code yourself.



//then whats the benifit of using implements over extends even tho implements requires you to write all the code yourself?
//more flexibility and control
//can implement multiple interfaces (not inheritance)

