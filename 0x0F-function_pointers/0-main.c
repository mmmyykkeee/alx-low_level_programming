#include "function_pointers.h"

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char *name = "John Doe";

    print_name(name, print_name_as_is);
    print_name(name, print_name_uppercase);
    return (0);
}
