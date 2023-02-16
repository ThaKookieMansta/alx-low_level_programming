#include <stdio.h>

int main(void)
{
        char x;
        int y;
        long int z;
        long long int a;
        float b;

        printf("Size of a char: %d byte(s)\n", sizeof(x));
        printf("Size of an int: %d byte(s)\n", sizeof(y));
        printf("Size of a long int: %d byte(s)\n", sizeof(z));
        printf("Size of a long long int: %d byte(s)\n", sizeof(a));
        printf("Size of a float: %d byte(s)\n", sizeof(b));

        return (0);
}
