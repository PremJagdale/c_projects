#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rand_num, num_guessed;

int main()
{
    srand(time(NULL));
    rand_num = rand() % 100 + 1;

    do
    {
        printf("\nGuess the number: ");
        scanf("%d", &num_guessed);
        if (num_guessed < rand_num)
        {
            printf("Too Low!");
        }
        else if (num_guessed > rand_num)
        {
            printf("Too High!\n");
        }
    } while (num_guessed != rand_num);
    {
        printf("\nCongo,You Guessed right");
    }
    return 0;
}
