// static variable
// in this, we don't need to create an instance of the class to access the static variable

void main(){
    // Constants c = Constants(); //constructor is called as we create an instance

    print(Constants.greeting); //hello world
    //as we can see, default constructor is not called when we access the static variable   
    //cuz static variable is not tied to an instance of the class
    //this saves memory cuz we don't need to create an instance 

    print(Constants.takeThisValue()); //25
}

class Constants{
    Constants(){
        print("constructor is called");
    }

    int val = 10;
    static String greeting = "hello world";
    static String bye = "bye world";

    static int takeThisValue(){
        // return val; ///error: static method can't access non-static variable
        return 25;
    }
}


//explaination: 

// Static Variables Belong to the Class, Not Instances
// class Constants{
//     static String greeting = "hello world";  // Belongs to the CLASS
//     int val = 10;                            // Belongs to INSTANCES
// }


// Static variables are stored in class memory area
// Constants.greeting;  // No instance needed - direct class access

// Instance variables need an object to exist
// var c = Constants();  // Constructor called - creates object in memory
// print(c.val);        // Accesses instance variable