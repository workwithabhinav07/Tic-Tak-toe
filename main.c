
#include <stdio.h>
int row(char b);
int coulumn(char b);
int victory(char a[3][3]);
char opponent(char a[3][3]);
// row determination function→
int row(char b)
{
    if (b == 'A' || b == 'B' || b == 'C')
        return 0;
    else if (b == 'D' || b == 'E' || b == 'F')
        return (1);
    else if (b == 'G' || b == 'H' || b == 'I')
        return (2);
    else
        return 0;
}
// column determination function↓
int coulumn(char b)
{
    if (b == 'A' || b == 'D' || b == 'G')
        return 0;
    else if (b == 'B' || b == 'E' || b == 'H')
        return (1);
    else if (b == 'C' || b == 'F' || b == 'I')
        return (2);
    else
        return 0;
}
// Opponent move determination function
char opponent(char a[3][3]) // odd for determine O and even for X
{
    int i, j, count = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == 'X' || a[i][j] == 'O')
            {
                count++;
            }
        }
    }
    if (count == 0)
    {
        return 'A';
    }
    else if (count == 1)
    {
        if (a[0][0] == 'X' || a[0][2] == 'X' || a[2][0] == 'X' || a[2][2] == 'X')
            return 'E';
        else if (a[1][1] == 'X')
            return 'I';
        else
            return 'E';
    }
    else if (count == 2)
    {
        if ((a[1][1] == 'O') || (a[2][0] == 'O') || (a[2][1] == 'O'))
            return 'I';
        else if ((a[0][1] == 'O') || (a[0][2] == 'O') || (a[2][2] == 'O'))
            return 'G';
        else
            return 'C';
    }
    else if (count == 3)
    {
        if ((a[0][0] == 'X' && a[0][2] == 'X') || (a[0][0] == 'X' && a[2][2] == 'X') || (a[1][1] == 'X' && a[2][1] == 'X'))
            return 'B';
        else if ((a[0][0] == 'X' && a[2][0] == 'X') || (a[1][1] == 'X' && a[1][2] == 'X'))
            return 'D';
        else if ((a[2][0] == 'X' && a[2][2] == 'X') || (a[1][1] == 'X' && a[0][1] == 'X') || (a[0][0] == 'X' && a[1][2] == 'X'))
            return 'H';
        else if ((a[0][2] == 'X' && a[2][2] == 'X') || (a[1][1] == 'X' && a[1][0] == 'X'))
            return 'F';
        else if ((a[0][0] == 'X' && a[0][1] == 'X') || (a[2][2] == 'X' && a[1][2] == 'X') || (a[1][1] == 'X' && a[0][0] == 'X') || (a[1][1] == 'X' && a[2][0] == 'X'))
            return 'C';
        else if ((a[0][0] == 'X' && a[1][0] == 'X') || (a[2][2] == 'X' && a[2][1] == 'X') || (a[1][1] == 'X' && a[0][2] == 'X') || (a[0][0] == 'X' && a[2][1] == 'X'))
            return 'G';
        else if ((a[0][2] == 'X' && a[0][1] == 'X') || (a[1][0] == 'X' && a[2][0] == 'X') || (a[1][0] == 'X' && a[0][1] == 'X'))
            return 'A';
        else
            return 'I';
    }
    else if (count == 4)
    {
        if (a[1][1] == 'O' && a[0][1] == 'O')
            return 'H';
        else if ((a[1][1] == 'O' && a[0][2] == 'O') || a[0][1] == 'O' && a[1][2] == 'O')
            return 'G';
        else if (a[1][1] == 'O' && a[1][0] == 'O')
            return 'F';
        else if (a[1][1] == 'O' && a[1][2] == 'O' || (a[0][0] == 'X' && a[2][0] == 'X' && a[1][0] == ' '))
            return 'D';
        else if (a[1][1] == 'O' && a[2][0] == 'O')
            return 'C';
        else if (a[1][1] == 'O' && a[2][1] == 'O' || (a[0][0] == 'X' && a[0][2] == 'X' && a[0][1] == ' '))
            return 'B';
        else if ((a[0][1] == 'O' && a[1][0] == 'O') || (a[1][0] == 'O' && a[0][2] == 'O'))
            return 'I';
        else
            return 'E';
    }
    else if (count == 5)
    {
        if ((a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == ' ') || (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == ' ') || (a[2][2] == ' ' && a[1][2] == 'X' && a[0][2] == 'X'))
            return 'I';
        else if ((a[2][2] == 'O' && a[1][1] == 'O' && a[0][0] == ' ') || (a[0][2] == 'X' && a[0][1] == 'X' && a[0][0] == ' ') || (a[0][0] == ' ' && a[1][0] == 'X' && a[2][0] == 'X'))
            return 'A';
        else if ((a[2][0] == 'O' && a[1][1] == 'O' && a[0][2] == ' ') || (a[0][2] == ' ' && a[2][2] == 'O' && a[1][2] == 'O') || (a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == ' '))
            return 'C';
        else if ((a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == ' ') || (a[2][0] == ' ' && a[2][2] == 'O' && a[2][1] == 'O') || (a[2][1] == 'X' && a[2][2] == 'X') || (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == ' ') || (a[2][0] == ' ' && a[2][1] == 'X' && a[2][2] == 'X') || (a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == ' ') || (a[2][1] == 'O' && a[1][1] == 'O' && a[0][1] == ' '))
            return 'G';
        else if ((a[0][2] == 'O' && a[2][2] == 'O' && a[1][2] == ' ') || (a[0][2] == 'X' && a[2][2] == 'X' && a[1][2] == ' ') || (a[1][2] == ' ' && a[1][1] == 'O' && a[1][0] == 'O'))
            return 'F';
        else if ((a[2][0] == 'O' && a[2][2] == 'O' && a[2][1] == ' ') || (a[2][0] == 'X' && a[2][2] == 'X' && a[2][1] == ' ') || (a[1][1] == 'X' && a[0][1] == 'X' && a[2][1] == ' ') || (a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == ' '))
            return 'H';
        else if ((a[0][0] == 'X' && a[2][0] == 'X' && a[1][0] == ' ') || (a[1][2] == 'O' && a[1][1] == 'O' && a[1][0] == ' '))
            return 'D';
        else if ((a[0][0] == 'X' && a[0][2] == 'X' && a[0][1] == ' ') || (a[1][1] == 'X' && a[0][1] == ' ' && a[2][1] == 'X'))
            return 'B';
        else if ((a[2][2] == 'X' && a[1][2] == 'X' && a[0][2] == ' ') || (a[0][2] == ' ' && a[1][1] == 'X' && a[2][0] == 'X'))
            return 'C';
        else
        {
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    if (a[i][j] == ' ')
                    {
                        if (i == 1 && j == 1)
                            return 'E';
                        else if (i == 0 && j == 0)
                            return 'A';
                        else if (i == 0 && j == 1)
                            return 'B';
                        else if (i == 0 && j == 2)
                            return 'C';
                        else if (i == 1 && j == 0)
                            return 'D';
                        else if (i == 1 && j == 2)
                            return 'F';
                        else if (i == 2 && j == 0)
                            return 'G';
                        else if (i == 2 && j == 1)
                            return 'H';
                        else
                            return 'I';

                        break;
                    }
                }
            }
        }
    }
    else if (count == 6)
    {
        if ((a[0][0] == 'X' && a[2][0] == 'X' && a[1][0] == ' '))
            return 'D';
        else if ((a[0][0] == 'X' && a[0][2] == 'X' && a[0][1] == ' ') || (a[1][1] == 'X' && a[0][1] == ' ' && a[2][1] == 'X'))
            return 'B';
        else if ((a[0][0] == 'X' && a[2][2] == 'X' && a[1][1] == ' ') || (a[0][2] == 'X' && a[2][0] == 'X' && a[1][1] == ' ') || (a[1][1] == ' ' && a[0][1] == 'X' && a[2][1] == ' '))
            return 'E';
        else if ((a[0][2] == 'X' && a[2][2] == 'X' && a[1][2] == ' '))
            return 'F';
        else if ((a[2][0] == 'X' && a[2][2] == 'X' && a[2][1] == ' ') || (a[1][1] == 'X' && a[0][1] == 'X' && a[2][1] == ' '))
            return 'H';
        else if ((a[1][1] == 'X' && a[0][0] == 'X' && a[2][2] == ' '))
            return 'I';
        else if ((a[1][1] == 'X' && a[0][2] == 'X' && a[2][0] == ' '))
            return 'G';
        else if ((a[1][1] == 'X' && a[2][0] == 'X' && a[1][2] == ' '))
            return 'C';
        else
        {
            if (a[0][2] == ' ')
                return 'G';
            else
                return 'C';
        }
    }
    else if (count == 7)
    {
        if ((a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == ' ') || (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == ' ') || (a[2][2] == ' ' && a[1][2] == 'X' && a[0][2] == 'X'))
            return 'I';
        else if ((a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == ' '))
            return 'G';
        else if ((a[2][2] == 'O' && a[1][1] == 'O' && a[0][0] == ' ') || (a[0][2] == 'X' && a[0][1] == 'X' && a[0][0] == ' ') || (a[0][0] == ' ' && a[1][0] == 'X' && a[2][0] == 'X'))
            return 'A';
        else if ((a[2][0] == 'O' && a[1][1] == 'O' && a[0][2] == ' ') || (a[0][2] == ' ' && a[2][2] == 'O' && a[1][2] == 'O') || (a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == ' '))
            return 'C';
        else if ((a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == ' ') || (a[2][0] == ' ' && a[2][2] == 'O' && a[2][1] == 'O') || (a[2][1] == 'X' && a[2][2] == 'X') || (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == ' ') || (a[2][0] == ' ' && a[2][1] == 'X' && a[2][2] == 'X') || (a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == ' '))
            return 'G';
        else if ((a[0][2] == 'O' && a[2][2] == 'O' && a[1][2] == ' ') || (a[0][2] == 'X' && a[2][2] == 'X' && a[1][2] == ' ') || (a[1][2] == ' ' && a[1][1] == 'O' && a[1][0] == 'O'))
            return 'F';
        else if ((a[2][0] == 'O' && a[2][2] == 'O' && a[2][1] == ' ') || (a[2][0] == 'X' && a[2][2] == 'X' && a[2][1] == ' '))
            return 'H';
        else if ((a[0][0] == 'X' && a[2][0] == 'X' && a[1][0] == ' ') || (a[1][2] == 'O' && a[1][1] == 'O' && a[1][0] == ' '))
            return 'D';
        else if ((a[0][0] == 'X' && a[0][2] == 'X' && a[0][1] == ' '))
            return 'B';
        else if ((a[2][2] == 'X' && a[1][2] == 'X' && a[0][2] == ' ') || (a[0][2] == ' ' && a[1][1] == 'X' && a[2][0] == 'X'))
            return 'C';
        else
        {
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    if (a[i][j] == ' ')
                    {
                        if (i == 1 && j == 1)
                            return 'E';
                        else if (i == 0 && j == 0)
                            return 'A';
                        else if (i == 0 && j == 1)
                            return 'B';
                        else if (i == 0 && j == 2)
                            return 'C';
                        else if (i == 1 && j == 0)
                            return 'D';
                        else if (i == 1 && j == 2)
                            return 'F';
                        else if (i == 2 && j == 0)
                            return 'G';
                        else if (i == 2 && j == 1)
                            return 'H';
                        else
                            return 'I';

                        break;
                    }
                }
            }
        }
    }
    else if (count == 8)
    {
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (a[i][j] == ' ')
                {
                    if (i == 1 && j == 1)
                        return 'E';
                    else if (i == 0 && j == 0)
                        return 'A';
                    else if (i == 0 && j == 1)
                        return 'B';
                    else if (i == 0 && j == 2)
                        return 'C';
                    else if (i == 1 && j == 0)
                        return 'D';
                    else if (i == 1 && j == 2)
                        return 'F';
                    else if (i == 2 && j == 0)
                        return 'G';
                    else if (i == 2 && j == 1)
                        return 'H';
                    else
                        return 'I';

                    break;
                }
            }
        }
    }
    else
        return 'A';
}
/*Victory check function */
int victory(char a[3][3])
{
    if ((a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X') ||
        (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X') ||
        (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X') ||
        (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X') ||
        (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X') ||
        (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X') ||
        (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X') ||
        (a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X'))
        return (1);
    else if ((a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O') ||
             (a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O') ||
             (a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O') ||
             (a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O') ||
             (a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O') ||
             (a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O') ||
             (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O') ||
             (a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O'))
        return (2);
    else
        return 0;
}

/*Main function */
int main()
{
start:
    int i, j, count = 0, vic;
    char a[3][3];
    int m, p, q, n, type, gst;
    char s, alpha;

    printf("\n__________________________\n");
    printf("||     TIC TACK TOE     ||");
    printf("\n__________________________\n\n");
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j] = ' ';
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("|  %c  |", a[i][j]);
        }
        printf("\n");
    }

    printf("\n \n Enter 1 to play  and pass  \n Enter 2 to play against computer \n");
    scanf("%d", &type);
    vic = victory(a);

    // Pass and play
    if (type == 1)
    {
        printf("\n\n Player 1 :  assign 'X' \n Player 2 :  assign 'O' \n");
        while (vic == 0 && count < 9)
        {
            printf(" \n Enter the co-ordintes to place X : ");
            scanf(" %d %d", &m, &n);
            m -= 1;
            n -= 1;
            if (a[m][n] == ' ')
            {
                a[m][n] = 'X';
                count++;
                vic = victory(a);
            }
            else
            {
                printf(" Position already occupied  or invalid position . Try again.\n");
                continue;
            }

            for (i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("|  %c  |", a[i][j]);
                }
                printf("\n");
            }
            if (vic == 1)
            {
                printf("\n\n|| CONGRACULATION ||");

                printf("\nPlayer 1 win ");

                printf(" \n\n For a new game type 1 \n");
                scanf(" %d", &gst);
                if (gst == 1)
                {
                    goto start;
                }
                else
                    break;
            }

            if (count == 9 && vic == 0)
            {
                printf("\n\n|| MATCH DRAW ||\n");

                printf(" \n\n For a new game type 1 \n");
                scanf(" %d", &gst);
                if (gst == 1)
                {
                    goto start;
                }
                else
                    break;
            }
        o_turn:
            printf(" \n Enter the co-ordinates to place 'O' : ");
            scanf(" %d %d", &p, &q);
            p -= 1;
            q -= 1;
            if (a[p][q] == ' ')
            {
                a[p][q] = 'O';
                count++;
                vic = victory(a);
            }
            else
            {
                printf(" Position already occupied or invalid position. Try again.\n");

                goto o_turn;
            }

            for (i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("|  %c  |", a[i][j]);
                }
                printf("\n");
            }

            if (vic == 2)
            {
                printf("\n\n|| CONGRACULATION ||");

                printf("\nPlayer 2 win ");
                printf(" \n\n For a new game type 1 \n");
                scanf(" %d", &gst);
                if (gst == 1)
                {
                    goto start;
                }
                else
                    break;
            }
        }
    }
    // End of pass and paly
    // computer play
    else if (type == 2)
    {
    computer:
        printf("\n\n Select ' X ' or ' O ' to start the game :  \n");
        scanf(" %c", &s);
        // Select X as symbol
        if (s == 'X' || s == 'x')
        {
            while (vic == 0 && count < 5)
            {
                printf("\n Enter the co-ordinates to place ' X ' : \n");
                scanf(" %d %d", &m, &n);
                m -= 1;
                n -= 1;
                if (a[m][n] == ' ') // User input for X position
                {
                    a[m][n] = 'X';
                    count++;
                    vic = victory(a);
                }
                else
                {
                    printf("\n  Position already occupied or invalid position. Try again\n");

                    continue;
                }

                if (vic == 1) // Victory for X
                {
                    for (i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            printf("|  %c  |", a[i][j]);
                        }
                        printf("\n");
                    }
                    printf("\n\n|| CONGRACULATION ||");

                    printf("\n You win ");

                    printf(" \n\n For a new game type 1 \n");
                    scanf(" %d", &gst);
                    if (gst == 1)
                    {
                        goto start;
                    }
                    else
                        break;
                }
                if (count == 5 && vic == 0) // Draw
                {
                    for (i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            printf("|  %c  |", a[i][j]);
                        }
                        printf("\n");
                    }
                    printf("\n\n|| MATCH DRAW ||\n");

                    printf(" \n\n For a new game type 1 \n");
                    scanf(" %d", &gst);
                    if (gst == 1)
                    {
                        goto start;
                    }
                    else
                        break;
                }

                alpha = opponent(a); // Computer move determination of O
                p = row(alpha);
                q = coulumn(alpha);
                a[p][q] = 'O';
                vic = victory(a);
                for (i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        printf("|  %c  |", a[i][j]);
                    }
                    printf("\n");
                }

                if (vic == 2) // Victory for O
                {
                    printf("\n\n|| YOU LOSE ||");

                    printf("\n Computer wins ");

                    printf(" \n\n For a new game type 1 \n");
                    scanf(" %d", &gst);
                    if (gst == 1)
                    {
                        goto start;
                    }
                    else
                        break;
                }
            }
        }

        else if (s == 'O' || s == 'o') // Select O as Symbol
        {
            while (vic == 0 && count < 5)
            {
                alpha = opponent(a); // Computer move determination of X
                p = row(alpha);
                q = coulumn(alpha);
                a[p][q] = 'X';
                count++;
                vic = victory(a);
                if (vic == 1) // Victory for X
                {
                    for (i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            printf("|  %c  |", a[i][j]);
                        }
                        printf("\n");
                    }
                    printf("\n\n|| CONGRACULATION ||");

                    printf("\n COMPUTER WINS  ");
                    printf("\n You lose ");

                    printf(" \n\n For a new game type 1 \n");
                    scanf(" %d", &gst);
                    if (gst == 1)
                    {
                        goto start;
                    }
                    else
                        break;
                }
                if (count == 5 && vic == 0) // Draw
                {
                    for (i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            printf("|  %c  |", a[i][j]);
                        }
                        printf("\n");
                    }
                    printf("\n\n|| MATCH DRAW ||\n");

                    printf(" \n\n For a new game type 1 \n");
                    scanf(" %d", &gst);
                    if (gst == 1)
                    {
                        goto start;
                    }
                    else
                        break;
                }

                for (i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        printf("|  %c  |", a[i][j]);
                    }
                    printf("\n");
                }
            o_computer:
                printf("\n Enter the co-ordinates to place ' O ' : \n");
                scanf(" %d %d", &m, &n);
                m -= 1;
                n -= 1;
                if (a[m][n] == ' ') // User input for O position
                {
                    a[m][n] = 'O';

                    vic = victory(a);
                }
                else
                {
                    printf("\n  Position already occupied or invalid position. Try again\n");

                    goto o_computer;
                }

                if (vic == 2) // Victory  for O
                {
                    for (i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            printf("|  %c  |", a[i][j]);
                        }
                        printf("\n");
                    }
                    printf("\n\n|| YOU WIN ||");

                    printf("\n Computer wins ");

                    printf(" \n\n For a new game type 1 \n");
                    scanf(" %d", &gst);
                    if (gst == 1)
                    {
                        goto start;
                    }
                    else
                        break;
                }
            }
        }
        // invalid input for computer play
        else
        {
            printf(" Invalid input. Please  select a valid option.\n");
            goto computer;
        }
    }
    // End of computer play
    else
    {
        printf("Invalid input. Please  select a valid option.\n");

        goto start;
    }
}