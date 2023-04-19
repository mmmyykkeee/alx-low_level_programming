#include "function_pointers.h"

/**
 * print_name - prints a name using the provided function
 * @name: name to print
 * @f: function to print with
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
