#include <stdio.h>
#include <stdlib.h>

char square[10]={'0','1','2','3','4','5','6','7','8','9'};
int choice, player;

int checkForWin();
void displayBoard();
void markBoard(char mark);

int main()
{
    int gameStatus;
    char mark;

    player =1;

    do
    {
        displayBoard();

        // change turns

        player=(player%2) ? 1 : 2;

        // get input
        printf("Player %d, enter a number: ",player);
        scanf("%d", &choice);

        //select character based on player turn

        mark = (player == 1) ? 'X' : 'O';


        // set board based on user choice or invalid choice
        markBoard(mark);

        gameStatus = checkForWin();

        player++;

    } while (gameStatus==-1);

    return 0;
}

/**
function to return game status
1 for game is over with result
-1 for game is in progress
0 game is over and no result
**/

int checkForWin()
{
    int returnValue =0;

    if (square[1] == square[2] && square[2]==square[3])
    {
        returnValue=1;
    }
    else if (square[4] == square[5] && square[5]==square[6])
        returnValue=1;
    else if (square[7] == square[8] && square[8]==square[9])
        returnValue=1;
    else if (square[1] == square[5] && square[5]==square[9])
        returnValue=1;
    else if (square[3] == square[5] && square[5]==square[7])
        returnValue=1;
    else if (square[1] != '1' && square[2]!='2' &&
             square[3] != '3' && square[4]!='4' &&
             square[5] != '5' && square[6]!='6' &&
             square[7] != '7' && square[8]!='8' &&
             square[9] != '9' )
        returnValue =0;
    else
        returnValue =-1;
    return returnValue;

}

// function to draw board of Tic Tac Toe with players mark

void displayBoard()
{
    system("clear");

    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X) - Player 2 (0)\n\n");

    printf("      |     |   \n");
    printf(" %c    |  %c  |  %c\n",square[1],square[2],square[3]);

    printf("______|_____|_____\n");
    printf("      |     |   \n");
    printf(" %c    |  %c  |  %c\n",square[4],square[5],square[6]);

    printf("______|_____|_____\n");
    printf("      |     |   \n");
    printf(" %c    |  %c  |  %c\n",square[7],square[8],square[9]);

    printf("______|_____|_____\n");
    printf("      |     |   \n");

}

/**
set the board with the correct character
X or O in the current spot in the array
**/

void markBoard(char mark)
{

    if (choice==1 && square[1]=='1')
        square[1]==mark;

    else if (choice==2 && square[2]=='2')
        square[2]==mark;

    else if (choice==3 && square[3]=='3')
        square[3]==mark;

    else if (choice==4 && square[4]=='4')
        square[4]==mark;

    else if (choice==5 && square[5]=='5')
        square[5]==mark;
    else if (choice==6 && square[6]=='6')
        square[6]==mark;

    else if (choice==7 && square[7]=='7')
        square[7]==mark;

    else if (choice==8 && square[8]=='8')
        square[8]==mark;

    else if (choice==9 && square[9]=='9')
        square[9]==mark;

    else
    {
        printf("Invalid move");

        player--;
        getchar();// pauses the program before board is redrawn
    }
}
