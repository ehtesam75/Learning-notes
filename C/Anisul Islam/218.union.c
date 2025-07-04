/*
Difference between union and structure (ft. chatgpt):

In C programming language, a union is a data structure that allows you to store different data types in the same memory location. It's similar to a struct in that it can contain multiple data members, but the difference is that a union can only hold one of its members at a time.

Here's an example of a union in C:

union my_union {
    int i;
    float f;
    char c;
};

In this example, the union my_union has three members: an integer i, a float f, and a character c. However, only one of these members can be used at a time, because they all share the same memory location. This means that if you assign a value to one member, it will overwrite the values of the other members.

The size of a union is determined by the size of its largest member, so in this example, my_union would be 4 bytes in size, because int is typically four bytes on most systems.

The main difference between a union and a struct is that a struct allocates separate memory for each of its members, while a union allocates a single block of memory for all its members. This means that a union is more memory-efficient than a struct when you need to store data in a space-constrained environment. However, the downside of using a union is that you can only use one of its members at a time, whereas with a struct, you can use all its members simultaneously.

Here's an example of a struct in C for comparison:

struct my_struct {
    int i;
    float f;
    char c;
};
In this example, the struct my_struct also has three members: an integer i, a float f, and a character c. However, unlike a union, all three members are allocated separate memory locations, so you can use all three members simultaneously without overwriting any of them. The size of the struct is determined by the sum of the sizes of its members, so in this example, my_struct would be 9 bytes in size (assuming that int is four bytes, float is four bytes, and char is one byte).
*/