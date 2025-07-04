#include <stdio.h>
union test1{
    int age;  //size 4 bytes
    char a; //1
};

union test2{
    char name[20];      //20
    double avarage;     //8bytes    
};

union test3{
    int x,y;    //both are 4 bytes
};

//comparing union's size to a struct's one
struct test4{
    int age;        //4
    double avar;        //8
   
};

int main() {
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;

    printf("size of t1: %d\n", sizeof(t1));
    printf("size of t2: %d\n", sizeof(t2));   //the output of t2 should be 20...but its showing 24..donnno exactly why
    printf("size of t3: %d\n", sizeof(t3));
    printf("size of t4 (struct): %d\n", sizeof(t4)); //output should be 12..but showing 16..same shit..according to chatgpt "additional 4 bytes of padding to ensure proper alignment."

    return 0;
}


/*regarding the output of t2: (conv w chatgpt)

the size of a union is typically determined by the size of its largest member, but the actual size of the union can be affected by padding added by the compiler for memory alignment purposes and this padding is usually added to ensure that the members of the union are properly aligned in memory.

When you print the size of t2 using sizeof, the output is 24 because that's the size of the largest member of the union t2 (the character array name) plus some padding bytes to align the double member to an 8-byte boundary.

In this code, the size of t2 is indeed affected by padding added by the compiler, resulting in a total size of 24 bytes. So, while the size of the name member is 20 bytes, the size of the entire union t2 is 24 bytes due to the padding added by the compiler.

The amount of padding bytes added by the compiler is implementation-dependent and can vary across different systems and compilers. In this case, it seems that the compiler added 4 padding bytes after the character array name to align the double member to an 8-byte boundary, hence the total size of t2 is 24 bytes.

 */