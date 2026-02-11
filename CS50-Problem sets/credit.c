#include <cs50.h>
#include <stdio.h>

int digit_checker(long n);

int main(void)
{
    long card = get_long("Enter number :");
    long temp = card;
    int sum1 = 0;
    int sum2 = 0;
    int sec_digit;
    while (temp != 0)
    {
        sum1 = sum1 + temp % 10;
        temp = temp / 10;
        sec_digit = temp % 10;
        temp = temp / 10;
        sec_digit *= 2;
        if (sec_digit > 9)
        {
            sec_digit -= 9;
        }
        sum2 = sum2 + sec_digit;
    }

    long temp2 = card;

    while (temp2 >= 100)
    {
        temp2 = temp2 / 10;
    }
    int total = sum1 + sum2;
    int length = digit_checker(card);
    if (total % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    // AMEX: 15 digits, starts with 34 or 37
    if (length == 15 && (temp2 == 34 || temp2 == 37))
    {
        printf("AMEX\n");
    }
    // MASTERCARD: 16 digits, starts with 51–55
    else if (length == 16 && temp2 >= 51 && temp2 <= 55)
    {
        printf("MASTERCARD\n");
    }
    // VISA: 13 or 16 digits, starts with 4
    else if ((length == 13 || length == 16) && temp2 / 10 == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}

int digit_checker(long n)
{
    int digit = 0;
    if (n == 0)
    {
        return 1;
    }
    while (n != 0)
    {
        n = n / 10;
        digit++;
    }
    return digit;
}
