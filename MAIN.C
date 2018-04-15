#include "aiplay.h"
#include "3x3.h"
#include "4x4-3.h"
#include "4x4-4.h"

void white()
{
    printf("\033[1;36m");
}
void blue()
{
    printf("\033[1;34m");
}
int gameMenu()
{
    int choice, n = 0;
    char a;

    while(1)
    {
        if(n == 0)
        {
            blue();
            puts("\n\n");
            puts("\n\t\t\t\t   ===============================================");
            puts("\t\t\t\t   Tarik - Ovi - Jami's Tick Tack Toe Game Project");
            puts("\t\t\t\t   ===============================================");
            puts("\n\t\t\t\t\t\t    Choose an option : ");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            white();
            printf("\n\t\t\t\t    >>>   1. Player vs Computer");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            blue();
            printf("\n\t\t\t\t       2. Player vs Player (3x3)");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            blue();
            printf("\n\t\t\t\t       3. Player vs Player (4x4) (3 Match Win)");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            blue();
            printf("\n\t\t\t\t       4. Player vs Player (4x4) (4 Match Win)");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            blue();
            puts("\n\t\t\t\t       5. Exit");
            blue();
            puts("\t\t\t\t       _______________________________________");
        }
        else if(n==1)
        {
            blue();
            puts("\n\n");
            puts("\n\t\t\t\t   ===============================================");
            puts("\t\t\t\t   Tarik - Ovi - Jami's Tick Tack Toe Game Project");
            puts("\t\t\t\t   ===============================================");
            puts("\n\t\t\t\t\t\t    Choose an option : ");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            blue();
            printf("\n\t\t\t\t       1. Player vs Computer");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            white();
            printf("\n\t\t\t\t    >>>   2. Player vs Player (3x3)");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            blue();
            printf("\n\t\t\t\t       3. Player vs Player (4x4) (3 Match Win)");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            blue();
            printf("\n\t\t\t\t       4. Player vs Player (4x4) (4 Match Win)");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            blue();
            puts("\n\t\t\t\t       5. Exit");
            blue();
            puts("\t\t\t\t       _______________________________________");
        }
        else if(n==2)
        {
            blue();
            puts("\n\n");
            puts("\n\t\t\t\t   ===============================================");
            puts("\t\t\t\t   Tarik - Ovi - Jami's Tick Tack Toe Game Project");
            puts("\t\t\t\t   ===============================================");
            puts("\n\t\t\t\t\t\t    Choose an option : ");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            blue();
            printf("\n\t\t\t\t       1. Player vs Computer");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            blue();
            printf("\n\t\t\t\t       2. Player vs Player (3x3)");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            white();
            printf("\n\t\t\t\t    >>>   3. Player vs Player (4x4) (3 Match Win)");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            blue();
            printf("\n\t\t\t\t       4. Player vs Player (4x4) (4 Match Win)");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            blue();
            puts("\n\t\t\t\t       5. Exit");
            blue();
            puts("\t\t\t\t       _______________________________________");
        }
        else if(n==3)
        {
            blue();
            puts("\n\n");
            puts("\n\t\t\t\t   ===============================================");
            puts("\t\t\t\t   Tarik - Ovi - Jami's Tick Tack Toe Game Project");
            puts("\t\t\t\t   ===============================================");
            puts("\n\t\t\t\t\t\t    Choose an option : ");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            blue();
            printf("\n\t\t\t\t       1. Player vs Computer");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            blue();
            printf("\n\t\t\t\t       2. Player vs Player (3x3)");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            blue();
            printf("\n\t\t\t\t       3. Player vs Player (4x4) (3 Match Win)");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            white();
            printf("\n\t\t\t\t    >>>   4. Player vs Player (4x4) (4 Match Win)");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            blue();
            puts("\n\t\t\t\t       5. Exit");
            blue();
            puts("\t\t\t\t       _______________________________________");
        }
        else if(n==4)
        {
            blue();
            puts("\n\n");
            puts("\n\t\t\t\t   ===============================================");
            puts("\t\t\t\t   Tarik - Ovi - Jami's Tick Tack Toe Game Project");
            puts("\t\t\t\t   ===============================================");
            puts("\n\t\t\t\t\t\t    Choose an option : ");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            blue();
            printf("\n\t\t\t\t       1. Player vs Computer");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            blue();
            printf("\n\t\t\t\t       2. Player vs Player (3x3)");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            blue();
            printf("\n\t\t\t\t       3. Player vs Player (4x4) (3 Match Win)");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            blue();
            printf("\n\t\t\t\t       4. Player vs Player (4x4) (4 Match Win)");
            blue();
            puts("\n\t\t\t\t       _______________________________________");
            white();
            puts("\n\t\t\t\t    >>>   5. Exit");
            blue();
            puts("\t\t\t\t       _______________________________________");
        }


        a=getch();
        fflush(stdin);
        if(a=='\r')
        {
            if(n==0)
                return n+1;
            else if(n==1)
                return n+1;
            else if(n==2)
                return n+1;
            else if(n==3)
                return n+1;
            else if(n==4)
                return n+1;
        }
        if(a==80)
            n=n+1;
        else if(a==72)
            n=n-1;
        if(n<0)
            n=5+n;
        n=n%5;
        fflush(stdin);
        system("cls");
    }
}

int main(void)
{
    int choice;
    while (1)
    {
        system("cls");
        choice = gameMenu();

        if (choice == 1)
            PlayAI();
        else if (choice == 2)
            PlayUser1();
        else if (choice == 3)
            PlayUser2();
        else if (choice == 4)
            PlayUser3();
        else if(choice == 5)
        {
            puts("\n\t\t\t\t\t\t  ===See You Again===\a");
            getch();
            return 0;
        }
        else
            continue;
    }

    return 0;
}
