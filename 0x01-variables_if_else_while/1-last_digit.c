#include <stdlib.h>
#include <time.h>
#include <stdio.h>
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

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        int lastNum;
        char s[100];
        lastNum = n % 10;
        if (lastNum > 5)
        {
                char s[100]="and is greater than 5";
        }
        else if (lastNum == 0)
        {
                char s[100]="and is 0";
        }
        else if (lastNum < 6 && lastNum != 0)
        {
                char s[100]="and is less than 6 and not 0";
        }
        printf("Last digit of %d is %d %s", n, lastNum, s);
        return (0);
}

