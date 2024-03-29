#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a function that prints a name.
 * @name: The name to be printed
 * @f: function to print name
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
