#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int n;
        char m[100];

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        if (n < 0)
        {
                char m[100] = "is negative";
        }
        else if (n == 0)
        {
                char m[100] = "is zero";
        }
        else
        {
                char m[100] = "is positive";
        }

        printf("%d %s \n", n, m);

        return (0);
}

