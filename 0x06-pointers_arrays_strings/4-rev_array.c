/**
 * reverse_array - A function that reverses
 * the content of an array of integers.
 * @a: The array.
 * @n: The number of elements.
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0, b;

	while (i < n--)
	{
		b = a[i];
		a[i++] = a[n];
		a[n] = b;
	}


}
