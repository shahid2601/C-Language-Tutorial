#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int Player, Computer = rand() % 3;
    /*
    0 --> Snake
    1 --> Water
    2 --> Gun
    */
    printf("Choose 0 for Snake, 1 for Water & 2 for Gun\n");
    scanf("%d", &Player);
    printf("Computer choose %d\n", Computer);

    if (Player == 0 && Computer == 0)
    {
        printf("It's a Draw\n");
    }
    else if (Player == 0 && Computer == 1)
    {
        printf("You Won!!\n");
    }
    else if (Player == 0 && Computer == 2)
    {
        printf("You Lose!!\n");
    }
    else if (Player == 1 && Computer == 0)
    {
        printf("You Lose!!\n");
    }
    else if (Player == 1 && Computer == 1)
    {
        printf("It's a Draw\n");
    }
    else if (Player == 1 && Computer == 2)
    {
        printf("You Won!!\n");
    }
    else if (Player == 2 && Computer == 0)
    {
        printf("You Won!!\n");
    }
    else if (Player == 2 && Computer == 1)
    {
        printf("You Lose!!\n");
    }
    else if (Player == 2 && Computer == 2)
    {
        printf("It's a Draw\n");
    }
    else
    {
        printf("Something went Wrong!!\n");
    }

    return 0;
}