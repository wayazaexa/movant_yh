#include <iostream>
#include <time.h>

using namespace std;

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
        cout << "Enter your guess between " << MIN << " and " << MAX << ": ";
        cin >> guess;
        guesses++;

        if (guess < answer)
        {
            cout << "Your guess is too low.\n";
        }
        else if (guess > answer)
        {
            cout << "Your guess is too high.\n";
        }
    } while (guess != answer);

    cout << "You are correct! You took " << guesses << " attempts to guess correct.\n\n";
    
    return 0;
}