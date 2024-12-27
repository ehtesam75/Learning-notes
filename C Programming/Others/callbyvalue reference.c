/*
Call by value means that a copy of the argument is passed to the function. This copy is separate from the original variable, and any changes made to the copy within the function do not affect the original variable outside of the function.
Call by reference means that a reference to the original variable is passed to the function. Any changes made to the variable within the function affect the original variable outside of the function
*/

#include <stdio.h>
int main() {
  int x = 5;

  // Call by value
  int y = x;
  y = y * y;
  printf("x = %d\n", x);  // x is still 5
  printf("y = %d\n", y);  // y is now 25

  // Call by reference
  int *z = &x;
  *z = *z * *z;
  printf("x = %d\n", x);  // x is now 25
  printf("*z = %d\n", *z);  // *z is also 25

  return 0;
}
