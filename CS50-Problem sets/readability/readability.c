#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("Text : ");
    string temp = text;

    int letter = 0;
    int space = 0;
    // for no of sentences
    int sentence = 0;

    int length = strlen(temp);

    for (int i = 0; i < length; i++)
    {
        if (temp[i] == ' ')
        {
            space++;
        }
        if (temp[i] == '!' || temp[i] == '.' || temp[i] == '?')
        {
            sentence++;
        }
        if (isalpha(temp[i]))
        {
            letter++;
        }
    }
    // for no of words
    int total_words = space + 1;

    float L = ((float) letter / total_words) * 100;
    float S = ((float) sentence / total_words) * 100;

    int index = (int) round((0.0588 * L) - (0.296 * S) - 15.8);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", index);
    }
}
