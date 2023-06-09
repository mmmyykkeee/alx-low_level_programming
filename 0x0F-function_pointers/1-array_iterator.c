#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each.
 * @array: the array to iterate through
 * @size: the size of the array
 * @action: the function to execute on each element of the array
 *
 * Return: Always ) (Success).
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
