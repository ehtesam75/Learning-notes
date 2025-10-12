void main(){
    List demo = [3, 5, 9, 'hwllo'];
    //so list is dynamic
    //it can have diff type of variable

    // but say i want to store only one type of var to store in list
    List<int> marks = [1, 3];
    // List<int> marks = [1, 3, 'the name'];    // error
    // <> is called generic
    
    print(marks);

    Student st = Student("aleen");
    print(st.name);
}

class Student{
    final dynamic name; 
    Student(this.name){
        name 
    }
}