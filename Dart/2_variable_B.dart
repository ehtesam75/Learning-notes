//from chatbot:
/*
Compile Time (Before running):
What Dart compiler does:
Checks syntax - Is the code written correctly?
Type checking - Are you using types correctly?
Null safety analysis - Could any variable be null when accessed?
Static analysis - Finds potential errors before running


Runtime (While running):
What happens during execution:
Memory allocation - Variables get actual memory
Code execution - Instructions run line by line
Value assignment - Variables get actual values
Error checking - Crashes if null accessed
*/



// String var_outside_main = "jdfffd"; //good
String? var_outside_main;

void main(){
    //null safety
    //Dart has null safety feature which means variables cannot be null unless 
    //explicitly declared as nullable
    String? someValue;
    print(someValue); // null

    // print(someValue.length); error; null does not have length property
    print(someValue?.length); //null ; it means if its null then print null else print length


    //notice now
    someValue = 'hello';
    print(someValue.length); //5
    //no error; cuz dart knows someValue is not null here

    var_outside_main = "testing";
    // print(var_outside_main.length);
    /*
    error; cuz dart does not know if var_outside_main is null or not, cuz it is declared outside main

    Conservative Safety:
    Dart chooses to be safe rather than sorry
    It assumes global variables could be modified by other code
    Better to show an error than allow a runtime crash
    */ 
    
    print(var_outside_main?.length); //7; now its ok
    //so we need to check explicitly if the variable is null or not for global variables

    //lets say we don't wnat to display null, instead we want to display 0 or some texts
    someValue = null;
    print(someValue?.length ?? 'varibale is null');
    print(someValue?.length ?? 0); //0 will print instead of null
}


/*

someValue?.length (Null-aware operator)

Safe: Returns null if someValue is null, otherwise returns the length
No crashes: Will never throw a runtime error
Return type: int? (nullable int)

someValue!.length (Null assertion operator)

Unsafe: Forces Dart to treat someValue as non-null
Can crash: Throws runtime error if someValue is actually null
Return type: int (non-nullable int)
*/ 