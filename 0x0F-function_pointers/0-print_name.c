#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: name to print
 * @f: function pointer that specifies how to print the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
    printf("My name is: ");
    f(name);
    printf("\n");
}

/**
 * print_name_as_is - prints a name as is
 * @name: name to print
 *
 * Return: void
 */
void print_name_as_is(char *name)
{
    printf("%s", name);
}

/**
 * print_name_uppercase - prints a name in uppercase
 * @name: name to print
 *
 * Return: void
 */
void print_name_uppercase(char *name)
{
    int i = 0;

    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            putchar(name[i] - 32);
        }
        else
        {
            putchar(name[i]);
        }
        i++;
    }
}
