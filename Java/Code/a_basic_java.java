//basic : from chatbot

/*
What is JVM (Java Virtual Machine)?
JVM is an abstract machine that executes Java bytecode (the compiled Java program).
It converts bytecode into machine-specific code so the program can run on any platform.
JVM is platform-independent and is part of the runtime environment.
It does not exist physically as software you install separately; it comes bundled with JRE.
JVM also handles memory management, security, and loading/verifying code.

What is JRE (Java Runtime Environment)?
JRE is a software package that provides the libraries and JVM needed to run Java programs.
It includes the JVM plus core class libraries and other files required for running Java applications.
JRE is for users who want to run Java programs but do not need to develop them.
It does not include development tools like compilers or debuggers.

What is JDK (Java Development Kit)?
JDK is a full software development kit used to develop, compile, and run Java applications.
It includes the JRE (and thus the JVM) plus development tools such as the Java compiler (javac), debugger, and other utilities.
JDK is for developers who want to write and build Java programs.

Their Relation in Short
JDK = JRE + Development Tools (compiler, debugger, etc.)
JRE = JVM + Libraries needed to run Java programs
JVM is the core engine that runs Java bytecode and is included inside the JRE
*/

//jdk : developer tools
//jre : libraries and toolkits
//jvm : runs java program (converts bytecode into machine-specific code)

//flow of execution
//MyProgram.java  --(javac compiler : javac)-->  MyProgram.class  --(java JVM)-->  Program runs (execute)
//note : .class is platform-independent bytecode
//and javac is a part of JDK
//and JVM reads the .class file and executes the program.


//who helped in this process of execution? (overview)

//JDK (Java Development Kit): Provides the javac compiler to convert .java to .class.
//JVM (Java Virtual Machine): Executes the .class bytecode.
//JRE (Java Runtime Environment): Contains the JVM and libraries needed to run .class files.

import java.awt.*;
import java.time.Clock;
import java.util.Date;

public class a_basic_java {
    public static void main(String[] args){
        //write psvm for shortcut for public static void main
        System.out.print("Hello world\n");
        //here system is a class, out a field, main is a method

        System.out.println("this will add a new line auto");
        System.out.println("null char: \0 \ndouble quote : \"");  //null char and double quote
        //write sout for shortcut for System.out.println

        int age = 3;
        System.out.println(age);

//        int views = 2_202_323_323; error; out of range
//        long views= 2_202_323_323; still error (by default java sees an integer as int)
        long views= 2_202_323_323L;
//        in java we can use _ in between digits for better understanding
//        range of int -2B to 2B

//        float a = 23.32; error by default decimal points is seen as double
        float a = 23.32F;
        boolean isValid = true;

//        premitive type
        int p = 3;
        int add = p;
        p = 5;
        System.out.println(p);

//        reference type
        Date now = new Date(); //HERE now variable is a instance/object of date class
//        now.getTime();
        System.out.println(now);

        Point point1 = new Point(7, 8);     //just write 7, 8
        Point point2 = point1;

        point1.x = 5;
        System.out.println(point2.x);
    }
}

/*
note:
Escape sequences are special character combinations that start with a backslash (\)
and are used to represent characters that are difficult or impossible to
type directly in a string or character literal.
\n - Newline (line feed)
\t - Tab character
\r - Carriage return (it's used to move the cursor to the beginning of the line)
\" - Double quote
\' - Single quote
\\ - Backslash
\b - Backspace
\0 - Null character


method: function inside a class

two catagory of type
premitive type : for storing simple values (num, char, booleans)
            memeory allocate and released by JRE
reference type : for storing complex values (data, mail message)
            when dealing with this, we need to manually allocate memory
            but JRE auto de allocate the memory when needed
            this type have members (i.e. can access the member using .)
*/


