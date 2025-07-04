#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int user_choose, computer_choose;
    int user_score = 0, computer_score = 0, tie_score = 0;
    printf("\nWelcome to the SnakeGunWater game\n");
    do
    {
        int gun = 1, water = 2, snake = 3;
        printf("\nEnter your choice: \n1. Gun\n2. Water\n3. Snake\n");
        printf("Please input a number from 1 to 3: ");
        // user's choice
        scanf("%d", &user_choose);
        switch (user_choose)
        {
        case 1:
            printf("\nYou choose:  Gun\n");
            break;
        case 2:
            printf("\nYou choose: Water\n");
            break;
        case 3:
            printf("\nYou choose: Snake\n");
            break;
        }
        if (user_choose > 3 || user_choose < 1)
        {
            printf("Invalid input! Please try again with a valid number\n");
        }
        // computer choice
        srand(time(0));
        computer_choose = rand() % 3 + 1;
        switch (computer_choose)
        {
        case 1:
            printf("Computer choose: Gun\n");
            break;
        case 2:
            printf("Computer choose: Water\n");
            break;
        case 3:
            printf("Computer choose: Snake\n");
            break;
        }
        if (user_choose == computer_choose)
        {
            printf("It's a tie!\n");
            tie_score++;
        }
        else if ((user_choose == snake && computer_choose == water) ||
                 (user_choose == gun && computer_choose == snake) ||
                 (user_choose == water && computer_choose == gun))
        {
            printf("\nCongratulation! You win!\n");
            user_score++;
        }
        else
        {
            printf("\nAlas! Computer win!\n");
            computer_score++;
        }
        printf("\nScores update: \n");
        printf("Your overall score: %d\n", user_score);
        printf("Computer's overall score: %d\n", computer_score);
        printf("Total tied: %d times\n", tie_score);

    } while (1);
    return 0;
}