#include <stdio.h>
int gcd(int a, int b);

int main() {
    int x =60, y = 24;
    int result = gcd(x, y);
    printf("gcd of %d and %d is %d\n", x, y, result);
    return 0;
}

int gcd(int a, int b){
    int temp;
    while(b != 0){   
        temp = b;
        b = a % b;
        a = temp;   //gcd(a, b) = gcd(b, r); Euclidean property of gcd
    }
    return a;
}

/*
Explaination: 

1. The while loop runs as long as b is not equal to 0.
2. Inside the loop, the current value of b is stored in a temporary variable temp.
3. b is then updated to the remainder of a divided by b, which is computed using the modulus operator %.
4. Finally, a is updated to the previous value of b, which is stored in temp.
5. The reason this algorithm works is because of the following property of the GCD: if a and b are two positive integers, and r is the remainder when a is divided by b, then gcd(a, b) = gcd(b, r). This property is known as the Euclidean property, and it is the basis for the Euclidean algorithm.

The while loop in the code repeatedly applies this property to compute the GCD of a and b. At each iteration, the value of b is updated to the remainder of a divided by b, which is equivalent to setting r equal to a % b. The value of a is then updated to the previous value of b, which is equivalent to setting b equal to the previous value of b. This process continues until b is equal to 0, at which point a is equal to the GCD of the original values of a and b.z
*/