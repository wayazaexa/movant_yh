/*
--------------------------------------------------------------------------------
Author:         Joakim Englund
E-mail:         joakimenglund@protonmail.com
File name:      rockPaperScissors.c
Description:    This program is a game of rock, paper, scissors against the
                computer.
Date:           2022-10-10
--------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "rockPaperScissorsFunctions.h"

int main ()
{
    int playerMove, computerMove, playerWins, computerWins, whoWonRound;
    const int MAX_MOVES = 10;
    char choice;
    srand(time(NULL));

    // Loop over a game.
    do
    {
        // Set these variables to 0 so that it happens every time the player
        // starts a new game.
        playerWins = 0;
        computerWins = 0;
        printf("Rock, Paper, Scissors\n");
        printf("=====================\n");

        // Loop over one move, until someone has won 10 times.
        do
        {
            printf("Your move (0 = Rock, 1 = Paper, 2 = Scissors): ");
            
            // Set new values to the variables.
            setNewMoves(&playerMove, &computerMove);
            // Check who won the round.
            whoWonRound = checkMoves(playerMove, computerMove);
            // Update the score.
            updateScore(whoWonRound, &playerWins, &computerWins);

            printf("Current score (you - computer): %d - %d\n", playerWins,
                                                                computerWins);
            printf("----------\n");
        } while (playerWins < MAX_MOVES && computerWins < MAX_MOVES);

        if (playerWins == MAX_MOVES)
        {
            printf("You won! Congratulations! ");
        }
        else
        {
            printf("You lost! My condolances. ");
        }

        printf("The final score was %d - %d\n", playerWins, computerWins);
        printf("Another game? (y/n) ");
        scanf("%c", &choice);
        printf("\n\n");
    } while (choice == 'y' || choice == 'Y');

    return 0;
}