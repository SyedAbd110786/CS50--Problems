#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int get_points(char ch);

int main(void)
{

    string player1 = get_string("Player 1 :");
    string player2 = get_string("Player 2 :");

    int length1 = strlen(player1);
    int length2 = strlen(player2);
    string temp1 = player1;
    int sum1 = 0;
    for (int i = 0; i < length1; i++)
    {
        char ch = tolower(temp1[i]);
        int points = get_points(ch);
        sum1 = sum1 + points;
    }
    string temp2 = player2;
    int sum2 = 0;
    for (int i = 0; i < length2; i++)
    {
        char ch = tolower(temp2[i]);
        int points = get_points(ch);
        sum2 = sum2 + points;
    }
    if (sum1 > sum2)
    {
        printf("Player 1 wins!\n");
    }
    else if (sum1 < sum2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int get_points(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'l' || ch == 'n' || ch == 'o' || ch == 'r' ||
        ch == 's' || ch == 't' || ch == 'u')
    {
        return 1;
    }
    else if (ch == 'b' || ch == 'c' || ch == 'm' || ch == 'p')
    {
        return 3;
    }
    else if (ch == 'f' || ch == 'h' || ch == 'v' || ch == 'w' || ch == 'y')
    {
        return 4;
    }
    else if (ch == 'd' || ch == 'g')
    {
        return 2;
    }
    else if (ch == 'j' || ch == 'x')
    {
        return 8;
    }
    else if (ch == 'q' || ch == 'z')
    {
        return 10;
    }
    else if (ch == 'k')
    {
        return 5;
    }
    else
    {
        return 0;
    }
}
