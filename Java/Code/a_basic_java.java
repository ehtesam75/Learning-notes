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

public class basic_java {
    public static void main(String[] args){
        System.out.print("Hello world\n");
        System.out.print("My first java program\n ");
    }
}