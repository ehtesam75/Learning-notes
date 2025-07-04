//1 + 3^2 + 5^3 + 7^4+......n1^n2;
#include <stdio.h>
#include <math.h>


int main() {
    int n1 = 7, n2 = 4;
    float sum = 0;
    for(int i = 1, j= 1; i<= n1, j<=n2; i+=2, j++){
        sum = sum + pow(i, j);
    }
    printf("%.f", sum);  //by adding . right before of f, i just removed the floating digits that were displayed in the output


//different method (without using the pow fucn)
    printf("\n\n");
    int last1 = 7, last2 = 4;
    int add = 0, power = 1; 
    for(int i = 1; i<= last1; i+=2){
        power =1; //initialize the vlaue of power to 1 once again
        for(int j = 1; j<= (i/2)+1; j++){
            power = power *i;
        }
        add = add + power;
    }
    printf("%d", add);

    return 0;
}