#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int checkwin2(char square[]);
void Board2(char square[]);
int PlayUser2()
{
    char square[17] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ',' ',' ',' ',' ',' '};
    int player = 1, i, choice;

    char mark;
    do
    {
        Board2(square);
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
        else if (choice == 10 && square[10] == ' ')
            square[10] = mark;

        else if (choice == 11 && square[11] == ' ')
            square[11] = mark;

        else if (choice == 12 && square[12] == ' ')
            square[12] = mark;

        else if (choice == 13 && square[13] == ' ')
            square[13] = mark;

        else if (choice == 14 && square[14] == ' ')
            square[14] = mark;

        else if (choice == 15 && square[15] == ' ')
            square[15] = mark;

        else if (choice == 16 && square[16] == ' ')
            square[16] = mark;


        else
        {
            printf("\n\t\t\t\t\t\t    Invalid move");
            player--;
            getch();
        }
        i = checkwin2(square);

        player++;
    }
    while(i == - 1);

    Board2(square);

    if (i == 1)
        printf("\n\n\t\t\t\t\t    ==>\aPlayer %d win\n", --player);
    else
        printf("\n\n\t\t\t\t\t    ==>\aGame draw\n");

    getch();

    return 0;
}
int checkwin2(char square[])
{
    if (square[1] == square[2] && square[2] == square[3] && square[1]!=' ')
        return 1;

    else if (square[3] == square[2] && square[2] == square[4] && square[3]!=' ')
        return 1;

    else if (square[7] == square[5] && square[5] == square[6] && square[7]!=' ')
        return 1;

    else if (square[6] == square[7] && square[8] == square[7] && square[6]!=' ')
        return 1;

    else if (square[9] == square[10] && square[11] == square[10] && square[9]!=' ')
        return 1;

    else if (square[11] == square[10] && square[11] == square[12] && square[12]!=' ')
        return 1;

    else if (square[13] == square[14] && square[14] == square[15] && square[15]!=' ')
        return 1;

    else if (square[14] == square[15] && square[15] == square[16] && square[16]!=' ')
        return 1;
    else if (square[1] == square[5] && square[5] == square[9] && square[9]!=' ')
        return 1;

    else if (square[5] == square[9] && square[13] == square[9] && square[9]!=' ')
        return 1;

    else if (square[2] == square[6] && square[10] == square[6] && square[6]!=' ')
        return 1;

    else if (square[14] == square[10] && square[10] == square[6] && square[6]!=' ')
        return 1;

    else if (square[3] == square[7] && square[7] == square[11] && square[11]!=' ')
        return 1;

    else if (square[11] == square[7] && square[11] == square[15] && square[15]!=' ')
        return 1;

    else if (square[4] == square[8] && square[8] == square[12] && square[12]!=' ')
        return 1;
    else if (square[8] == square[12] && square[12] == square[16] && square[12]!=' ')
        return 1;

    else if (square[7] == square[2] && square[7] == square[12] && square[12]!=' ')
        return 1;

    else if (square[5] == square[10] && square[15] == square[10] && square[10]!=' ')
        return 1;

    else if (square[3] == square[6] && square[6] == square[9] && square[9]!=' ')
        return 1;

    else if (square[8] == square[11] && square[11] == square[14] && square[14]!=' ')
        return 1;

    else if (square[1] == square[6] && square[6] == square[11] && square[11]!=' ')
        return 1;

    else if (square[6] == square[11] && square[11] == square[16] && square[16]!=' ')
        return 1;
    else if (square[4] == square[7] && square[7] == square[10] && square[10]!=' ')
        return 1;

    else if (square[13] == square[10] && square[10] == square[7] && square[7]!=' ')
        return 1;

    else if (square[1] != ' ' && square[2] != ' ' && square[3] != ' ' &&
             square[4] != ' ' && square[5] != ' ' && square[6] != ' ' && square[7]
             != ' ' && square[8] != ' ' && square[9] != ' ' && square[10] != ' ' && square[11] != ' ' && square[12] != ' ' &&
             square[13] != ' ' && square[14] != ' ' && square[15] != ' ' && square[16]!= ' ')

        return 0;
    else
        return -1;
}

void Board2(char square[])
{
    system("cls");
    printf("\n\n\t\t\t\t\t\t   Tic Tac Toe\n\n");

    printf("\n\t\t\t\t\t  Player 1 (X)  -  Player 2 (O)\n\n\n");

    printf("\t\t\t\t\t            |       |       |     \n");
    printf("\t\t\t\t\t        %c   |   %c   |   %c   |   %c\n", square[1], square[2], square[3], square[4]);
    printf("\t\t\t\t\t            |       |       |     \n");
    printf("\t\t\t\t\t     -------------------------------\n");
    printf("\t\t\t\t\t            |       |       |     \n");
    printf("\t\t\t\t\t        %c   |   %c   |   %c   |   %c\n", square[5], square[6], square[7], square[8]);
    printf("\t\t\t\t\t            |       |       |     \n");
    printf("\t\t\t\t\t     -------------------------------\n");
    printf("\t\t\t\t\t            |       |       |     \n");
    printf("\t\t\t\t\t        %c   |   %c   |   %c   |   %c\n", square[9], square[10], square[11], square[12]);
    printf("\t\t\t\t\t            |       |       |     \n");
    printf("\t\t\t\t\t     -------------------------------\n");
    printf("\t\t\t\t\t            |       |       |     \n");
    printf("\t\t\t\t\t        %c   |   %c   |   %c   |   %c\n", square[13], square[14], square[15], square[16]);
}


