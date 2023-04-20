#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - A function that prints anyting.
 * @format: The list of the type of arguments.
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list allParams;
	char *temporary;
	int i = 0;
	char *separator = "";

	va_start(allParams, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(allParams, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(allParams, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(allParams, double));
				break;
			case 's':
				temporary = va_arg(allParams, char*);
				if (temporary == NULL)
				{
					temporary = "(nil)";
				}
				printf("%s%s", separator, temporary);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	va_end(allParams);
	printf("\n");
}
