#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 Task.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return:  0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char user_password[7], *codec;
	int arg_length = strlen(argv[1]), i, temporary;

	codec = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	temporary = (arg_length ^ 59) & 63;
	user_password[0] = codec[temporary];

	temporary = 0;
	for (i = 0; i < arg_length; i++)
		temporary += argv[1][i];
	user_password[1] = codec[(temporary ^ 79) & 63];

	temporary = 1;
	for (i = 0; i < arg_length; i++)
		temporary *= argv[1][i];
	user_password[2] = codec[(temporary ^ 85) & 63];

	temporary = 0;
	for (i = 0; i < arg_length; i++)
	{
		if (argv[1][i] > temporary)
			temporary = argv[1][i];
	}
	srand(temporary ^ 14);
	user_password[3] = codec[rand() & 63];

	temporary = 0;
	for (i = 0; i < arg_length; i++)
		temporary += (argv[1][i] * argv[1][i]);
	user_password[4] = codec[(temporary ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		temporary = rand();
	user_password[5] = codec[(temporary ^ 229) & 63];

	user_password[6] = '\0';
	printf("%s", user_password);
	return (0);
}
