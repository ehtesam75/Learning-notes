#include <stdio.h>

int main() {
    int arr[][2] = {{1,2}, {3,4}};  //2nd dimention size must be specified while declaring 2d array...cuz first dimention is treated as a pointer, so no need to specify the size. but the 2nd dimention is teated as a actual array..so...
    /*
    1       2       3       4
    (0,0)  (0,1)    (1,0)   (1.1)       ;; is this how these get stored in memory
    */
    return 0;
}