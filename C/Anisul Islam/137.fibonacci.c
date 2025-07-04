#include <stdio.h>

int main()
{
    int first_num, second_num, next_num;
    first_num = 0;
    second_num = 1;

    int i = 2, n = 5;
    if (n <= 2)
    {
        if(n==2){
             printf("0\t1");
        }else if(n==1){
            printf("0");
        }else{
            printf("Not a valid input!");
        }

    }
    else
    {
        printf("0\t1\t");
        while (i < n)
        {
            next_num = first_num + second_num;
            printf("%d\t", next_num);
            first_num = second_num;
            second_num = next_num;
            i++;
        }
    }

    return 0;
}