#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char pass[100];
    int i, sum, n;

    sum = 0;

    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        pass[i] = rand() % 78 + '0';
        sum += pass[i];
        putchar(pass[i]);
    }

    n = (2772 - sum) % 78;

    if (n < 10)
    {
        pass[0] += n;
        putchar(pass[0]);
    }
    else
    {
        pass[0] += n / 10;
        pass[1] += n % 10;
        putchar(pass[0]);
        putchar(pass[1]);
    }

    return (0);
}
