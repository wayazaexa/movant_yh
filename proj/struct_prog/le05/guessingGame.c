#include <stdio.h>
#include <time.h>

int main ()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses = 0;
    int answer;

    srand(time(0));
    answer = (rand() % MAX) + MIN;
    
    do
    {
        printf("Enter your guess between %d and %d: ", MIN, MAX);
        scanf("%d", &guess);
        guesses++;

        if (guess < answer)
        {
            printf("Your guess is too low.\n");
        }
        else if (guess > answer)
        {
            printf("Your guess is too high.\n");
        }
    } while (guess != answer);

    printf("You are correct! You took %d attempts to guess correct.\n\n", guesses);
    
    return 0;
}