//private variable, getter, setter

void main(){
    var cookie = Cookie();
    // cookie._height = 3; //_height can be accessed as it's in the same file
    cookie._width = 4; //_height can be accessed as it's in the same file
    print(cookie.calculate_size());

    // cookie.height = 10;  can't change height
    print(cookie.height); //6

    cookie.setHeight = 10; //this is the syntax for setter; notice: it's not setHieight(10)!
    print(cookie.height);
}

class Cookie{
    // private varibale
    // in dart private varibale can be accessed in the same file
    int _height = 6; //for private varibale use _ in first
    int _width = 7;

    //getter:
    int get height => _height;  //get is a keyword
    //It means when height is accessed, return the value of the private _height variable

    //setter:
    set setHeight(int h){
        _height = h;
    }


    //method
    int calculate_size(){
        return _height * _width;
    }

    void modify_height(int h){  //or we can use set keyword (setter)
        _height = h;
    }
}