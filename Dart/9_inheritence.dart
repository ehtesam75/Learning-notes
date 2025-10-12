//inheritance
//is a relation
//parent class is also known as base or super class
//child class is also known as derived or sub class

void main(){
    Car car = Car();
    print(car.speed); //15
    car.printInfo(); //4  

    Vehicle car_instance = Car();   
    //now car_instance is of type Vehicle;
    //can only access members of Vehicle, not Car (like numberOfWeels or printInfo)
    // print(car_instance.numberOfWeels); //error
    print((car_instance as Car).numberOfWeels); //4; now correct
    //correct cuz we are telling Dart that car_instance is actually a Car object

    Truck truck = Truck();
    print(truck.isEngineWorking); //true
    truck.greeting(); //hello


    Car car2 = Car();
    car2.accelerate();
    print('Speed is : ${car2.speed}'); //20; how does it work? precedence? see note at the end

    Vehicle vehicle2 = Vehicle();
    vehicle2.accelerate();
    print('vahicle speed is ${vehicle2.speed}'); //20; 
}

class SomeClass{
    int speed = 15;
    void greeting(){
        print("hello");
    }

    void accelerate(){
        speed += 10;
    }
}

class Vehicle extends SomeClass{
    // int speed = 5;
    bool isEngineWorking = true;
    bool lightOn = false;

    //note:
    // @override doesn't change how your code runs, but it adds a crucial SAFETY CHECK that 
    // ensures you are actually replacing the method you think you are. 
    // It's a best practice you should always use when overriding.

    // @override
    // void accelarate(){  //this will give me warning (as its a typo; its the main objective of @override; to find this type of typo)
    //     //The method doesn't override an inherited method.
    //     speed += 5;
    // }

    @override
    void accelerate() {
        // This method overrides the accelerate method in SomeClass
        speed += 5;
    }
}

class Car extends Vehicle{
    //car inherits from Vehicle
    //car IS A vehicle
    int numberOfWeels = 4;
    void printInfo(){
        print(numberOfWeels);
        super.lightOn = false; //super is used to access members of the parent class
    }
}

class Truck extends Vehicle{
    int numberOfWeels = 6;
    void printInfoTruck(){
        print(numberOfWeels);
    }
}

//note: Dart does not support multiple inheritance
//so a class can only extend one class


//note:
// The Rules of Precedence
// Start from the bottom, go up: Dart always starts its search for a method or 
//         variable in the actual class of the object (Car) and moves up the inheritance 
//         chain (Vehicle, then SomeClass) until it finds the first match.
// First match wins: As soon as it finds a match, it stops searching and uses that one.
// Methods use local variables: A method will always operate on variables defined within 
//          its own class scope. If it can't find the variable there, 
//          it will look up the inheritance chain until it finds the first match. 