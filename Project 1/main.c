#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator
    srand(time(0));

    // Generate random number between 1 to 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    // Print the random number
    // printf("Random number: %d\n", randomNumber);

    do
    {
        printf("Guess the Number:\n");
        scanf("%d", &guessed_number);
        if (guessed_number > randomNumber)
        {
            printf("Lower Number Please!!\n");
        }
        else if (guessed_number < randomNumber)
        {
            printf("Higher Number Please!!\n");
        }
        else
        {
            printf("Congrats!!, You Won!!\n");
        }
        no_of_guesses++;

    } while (guessed_number != randomNumber);
    printf("You guessed the number in %d guesses", no_of_guesses);

    return 0;
}