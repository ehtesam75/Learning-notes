//Abstract classes are used to define a common interface for a group of related classes.
//we cannot create an instance of an abstract class.



void main(){
    
}

abstract class Vehicle{
    int numberOfWeels = 4;
    void accelarate();
    //in abstract class, we can define methods without implementation
}

class Car extends Vehicle{
    @override
    void accelarate() {
        print("Car is accelerating with $numberOfWeels");
        //notice : here we didn't need to override the numberOfWeels property
    }
    //if we extends a abstruct class, we must implement all of its methods
}

class Truck implements Vehicle{
    @override   //if we skip this part, it will throw an error
    int numberOfWeels = 6;

    @override
    void accelarate() {
        print("Truck is accelerating with $numberOfWeels");
    }
    //if we implements a abstruct class, we must implement all of its methods as usal
}