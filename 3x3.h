#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int checkwin1(char square[]);
void Board1(char square[]);

int PlayUser1()
{
    char square[10] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    int player = 1, i, choice;

    char mark;
    do
    {
        Board1(square);
        player = (player % 2) ? 1 : 2;

        printf("\n\n\t\t\t\t\t    Player %d, Enter A Number: ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == ' ')
            square[1] = mark;

        else if (choice == 2 && square[2] == ' ')
            square[2] = mark;

        else if (choice == 3 && square[3] == ' ')
            square[3] = mark;

        else if (choice == 4 && square[4] == ' ')
            square[4] = mark;

        else if (choice == 5 && square[5] == ' ')
            square[5] = mark;

        else if (choice == 6 && square[6] == ' ')
            square[6] = mark;

        else if (choice == 7 && square[7] == ' ')
            square[7] = mark;

        else if (choice == 8 && square[8] == ' ')
            square[8] = mark;

        else if (choice == 9 && square[9] == ' ')
            square[9] = mark;

        else
        {
            printf("\n\t\t\t\t\t\t    Invalid move");
            player--;
            getch();
        }
        i = checkwin1(square);

        player++;
    }
    while(i == - 1);

    Board1(square);

    if (i == 1)
        printf("\n\n\t\t\t\t\t    ==>\aPlayer %d win\n", --player);
    else
        printf("\n\n\t\t\t\t\t    ==>\aGame draw\n");

    getch();

    return 0;
}

int checkwin1(char square[])
{
    if (square[1] == square[2] && square[2] == square[3] && square[1]!=' ')
        return 1;

    else if (square[4] == square[5] && square[5] == square[6] && square[6]!=' ')
        return 1;

    else if (square[7] == square[8] && square[8] == square[9] && square[9]!=' ')
        return 1;

    else if (square[1] == square[4] && square[4] == square[7] && square[7]!=' ')
        return 1;

    else if (square[2] == square[5] && square[5] == square[8] && square[8]!=' ')
        return 1;

    else if (square[3] == square[6] && square[6] == square[9] && square[9]!=' ')
        return 1;

    else if (square[1] == square[5] && square[5] == square[9] && square[9]!=' ')
        return 1;

    else if (square[3] == square[5] && square[5] == square[7] && square[7]!=' ')
        return 1;

    else if (square[1] != ' ' && square[2] != ' ' && square[3] != ' ' &&
             square[4] != ' ' && square[5] != ' ' && square[6] != ' ' && square[7]
             != ' ' && square[8] != ' ' && square[9] != ' ')

        return 0;
    else
        return -1;
}

void Board1(char square[])
{
    system("cls");
    printf("\n\n\t\t\t\t\t\t   Tic Tac Toe\n\n");

    printf("\n\t\t\t\t\t  Player 1 (X)  -  Player 2 (O)\n\n\n");

    printf("\t\t\t\t\t            |       |     \n");
    printf("\t\t\t\t\t        %c   |   %c   |   %c\n", square[1], square[2], square[3]);
    printf("\t\t\t\t\t            |       |     \n");
    printf("\t\t\t\t\t     -----------------------\n");
    printf("\t\t\t\t\t            |       |     \n");
    printf("\t\t\t\t\t        %c   |   %c   |   %c \n", square[4], square[5], square[6]);
    printf("\t\t\t\t\t            |       |     \n");
    printf("\t\t\t\t\t     -----------------------\n");
    printf("\t\t\t\t\t            |       |     \n");
    printf("\t\t\t\t\t        %c   |   %c   |   %c \n", square[7], square[8], square[9]);
    printf("\t\t\t\t\t            |       |     \n");
}
