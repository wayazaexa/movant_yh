/*
--------------------------------------------------------------------------------
Author:         Joakim Englund
E-mail:         joakimenglund@protonmail.com
File name:      rockPaperScissorsFunctions.c
Description:    This file contains the helper functions for the game in
                rockPaperScissors.c.
Date:           2022-10-10
--------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include "rockPaperScissorsFunctions.h"

/*
Inputs: Two pointers to variables of type integer.
Output: N/A.
Description: This functions handles the setting of new values to the
             variables containing information about what moves the player and
             computer makes in a round.
*/
void setNewMoves(int *playerMove, int *computerMove)
{
    char c;
    scanf("%d", playerMove);

    /*
    I had trouble with things being left in the input buffer and needed
    to flush the buffer. This while loop just reads one character at a
    time (and does nothing) until the input buffer is empty.
    */
    while (c = getchar() != '\n')
    {}

    // Randomize the computer's choice.
    *computerMove = rand() % 3;
}

/*
Inputs: Two integers containing what moves the player and computer has made.
Output: An integer containing information about who won the round.
Description: This function checks who won a round and returns the result.
*/
int checkMoves(int playerMove, int computerMove)
{
    if (computerMove == 0)
    {
        printf("The computer chose Rock.\n");
        if (playerMove == 0)
        {
            printf("This round was a draw.\n");
        }
        else if (playerMove == 1)
        {
            printf("You won this round.\n");
            return 1;
        }
        else
        {
            printf("You lost this round.\n");
            return 0;
        }
    }
    else if (computerMove == 1)
    {
        printf("The computer chose Paper.\n");
        if (playerMove == 0)
        {
            printf("You lost this round.\n");
            return 0;
        }
        else if (playerMove == 1)
        {
            printf("This round was a draw.\n");
        }
        else
        {
            printf("You won this round.\n");
            return 1;
        }
    }
    else
    {
        printf("The computer chose Scissors.\n");
        if (playerMove == 0)
        {
            printf("You won this round.\n");
            return 1;
        }
        else if (playerMove == 1)
        {
            printf("You lost this round.\n");
            return 0;
        }
        else
        {
            printf("This round was a draw.\n");
        }
    }
    return 42;
}

/*
Inputs: An integer containing information about who won a round, and two
        pointers to integers containing the amount of wins the player and
        computer has recpectively.
Output: N/A.
Description: This function checks who won and updates the variables that stores
             the amount of wins the player and computer has.
*/
void updateScore(int whoWon, int *playerWins, int *computerWins)
{
    if (whoWon == 0)
    {
        (*computerWins)++;
    }
    else if (whoWon == 1)
    {
        (*playerWins)++;
    }
}