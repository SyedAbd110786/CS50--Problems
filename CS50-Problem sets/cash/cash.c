#include <cs50.h>
#include <stdio.h>

int get_greater_zero_int(string s);

int main(void)
{
    int change = get_greater_zero_int("Change owed :");

    int coin = 0;
    //greedy algorithm
    while (change >= 25)
    {
        change = change - 25;
        coin++;
    }
    while (change >= 10)
    {
        change -= 10;
        coin++;
    }
    while (change >= 5)
    {
        change -= 5;
        coin++;
    }
    while (change >= 1)
    {
        change -= 1;
        coin++;
    }
    printf("Coins : %i\n", coin);
}
int get_greater_zero_int(string s)
{
    int n;
    do
    {
        n = get_int("%s", s);
    }
    while (n < 1);
    return n;
}
