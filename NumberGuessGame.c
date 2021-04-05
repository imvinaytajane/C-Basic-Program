#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand() % 100 + 1;

    do
    {
        printf("Guess the Number Between 1 to 100\n");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("Lower Number Please!\n");
        }

        else if (guess < number)
        {
            printf("Greater Number Please!\n");
        }

        else
        {
            printf("Congrats!! You Guessed in %d Attempts\n", nguesses);
        }

        nguesses++;

    } while (guess != number);

    return 0;
}