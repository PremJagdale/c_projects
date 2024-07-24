#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int user, computer, score;
void menu();
void calc();

void menu()
{
    printf("\nWelcome to game! ");
    printf("\nChoose the following options: ");
    printf("\n1. Rock");
    printf("\n2. Paper");
    printf("\n3. Scissors\n");
}

int main()
{
    printf("-------------------------------------------------------------");
    menu();
    srand(time(NULL));
    computer = rand() % 3 + 1;
    printf("\nEnter your move: ");
    scanf("%d", &user);
    printf("Computer's move: %d", computer);

    if (user == 1 && computer == 1)
    {
        printf("\nDraw!");
    }
    else if (user == 1 && computer == 2)
    {
        printf("\nYou Lost!");
    }
    else if (user == 1 && computer == 3)
    {
        printf("\nYou Won!");
        score++;
    }
    else if (user == 2 && computer == 1)
    {
        printf("\nYou Won!");
        score++;
    }
    else if (user == 2 && computer == 2)
    {
        printf("\nDraw!");
    }
    else if (user == 2 && computer == 3)
    {
        printf("\nYou Lost!");
    }
    else if (user == 3 && computer == 1)
    {
        printf("\nYou Lost!");
    }
    else if (user == 3 && computer == 2)
    {
        printf("\nYou Won!");
        score++;
    }
    else if (user == 3 && computer == 3)
    {
        printf("\nDraw!");
    }
    else
    {
        printf("\nInvalid move");
    }
    printf("\nScore: %d\n", score);
    return 0;
}