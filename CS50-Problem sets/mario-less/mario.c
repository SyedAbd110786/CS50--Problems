#include <cs50.h>
#include <stdio.h>

int get_positive_int(string s);
int main(void)
{
    int height = get_positive_int("Height :");

    for (int i = 0; i < height; i++)
    {
        // for spaces
        for (int sp = 0; sp < height - 1 - i; sp++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int get_positive_int(string s)
{
    int n;
    do
    {
        n = get_int("%s", s);
    }
    while (n < 1 || n > 8);
    return n;
}
