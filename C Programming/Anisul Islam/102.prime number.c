#include <stdio.h>

int main()
{
    int enter_num = 9, count = 0;
    if (enter_num < 2)
    {
        printf("%d is not a prime number\n", enter_num);
    }
    else
    {
        for (int i = 2; i < enter_num; i++)
        {
            if (enter_num % i == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("%d is a prime number\n", enter_num);
        }
        else
        {
            printf("%d is not a prime number\n", enter_num);
        }
    }
    return 0;
}