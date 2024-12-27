#include <stdio.h>

int main() {
    float base = 34.4, height = 44.3, area;
    area = (float)1/2 * base * height;
    printf("area is %.2f\n", area);

    int a = 10, b = 5, c = 3, d;
    d = a = b = c;

    printf("%d\n",a );
    printf("%d\n",b );
    printf("%d\n",c );
    printf("%d\n",d );  //assianment operator's right associativity is responsible for the output being the same for all of the 4 variables

    // In the above example, the assignment operator = is used multiple times with the same precedence level. However, since the assignment operator is right-associative, the right-most expression c is evaluated first and then assigned to b. Then, the resulting value of b (which is 3) is assigned to a. Finally, the resulting value of a (which is also 3) is assigned to d.
    
    return 0;
}

/*
say, a+b =7;
here a and b is operand 
+ is operator 
'a+b = 7' is  a expression;

operators prioraty: 
The following is the order of operator precedence in C, listed from highest to lowest:
Parentheses () - expressions within parentheses are evaluated first
Unary operators - including ++, --, +, -, !, and sizeof
Multiplicative operators - including *, /, and %
Additive operators - including + and -
Relational operators - including <, <=, >, and >=
Equality operators - including == and !=
Logical AND operator - &&
Logical OR operator - ||
Conditional operator - ? :
Assignment operators - including =, +=, -=, *=, /=, and %=

If an expression contains multiple operators with the same precedence level, the order of evaluation depends on the associativity of those operators.
The associativity of an operator determines whether the operator is evaluated from left to right or from right to left when multiple operators with the same precedence level are present in an expression. But almost all operator has a associativity of left to right..so if multiple operators with same associativity arives , we will evaluate them from left to right....
btw =, ?: operator is right associative

operator are of a lot of types: 
1. arithmetic: addition (+), subtraction (-), multiplication (*), division (/), and modulus (%). 
2. assingment : =, +=, -=, *=, /=, and %=.
3. relational : >, <, >=, <=, ==, and !=.
4. logical: && (and), || (or), and ! (not)
5. conditional: ternary operator (?:)
6. unary: ++ (increment), -- (decrement), - (negation), and ! (logical negation).
7. bitwise: & (and), | (or), ^ (exclusive or), << (left shift), and >> (right shift)
8. special operator
*/