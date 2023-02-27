/**
 * swap_int - This function swaps the values of two integers *a and *b.
 * @a: The first integer.
 * @b: The second integer
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;

}
