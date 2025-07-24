//mixin
//mixes in functionality from multiple classes
//its a way to reuse code in multiple class

void main(){
    Animal a = Animal();
    a.func(); // Jump 10

    Dog d = Dog();
    d.yoo(); // 10

    // Dog().yoo(); also works
}

mixin Jump{
    int jumping = 10;
}

class Animal with Jump{
    // now Animal can use the functionality of Jump mixin
    void func(){
        print("Jump $jumping");
    }
}

//its not like a parent child relationship between jump and animal
//thats its diff from inheritance

class Dog extends Animal{
    // Dog can also use Jump mixin
    void yoo(){
        print(jumping);
    }
}

mixin scream{
    bool isScreaming = true;
}

class Cat with Jump, scream{
    //multiple mixins can be used
    void fucntion(){
        print(isScreaming);
        print(jumping);
    }
}

//mixin class
mixin class Fly{
    int flying = 20;
    void fucntion(){
        print("yoo");
    }
}

class bird with Fly{
    void fly(){
        print("Flying at $flying");
    }
}