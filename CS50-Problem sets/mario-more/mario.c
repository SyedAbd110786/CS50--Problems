#include <cs50.h>
#include <stdio.h>

int get_positive_int(string s);

int main(void)
{
    int height = get_positive_int("Height :");

    for (int row = 0; row < height; row++)
    {
        // for spaces
        for (int sp = 0; sp < height - row - 1; sp++)
        {
            printf(" ");
        }
        // for left paramid
        for (int st = 0; st <= row; st++)
        {
            printf("#");
        }
        // for space between paramids
        for (int spp = 0; spp < 2; spp++)
        {
            printf(" ");
        }
        // for right paramid
        for (int stt = 0; stt <= row; stt++)
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
