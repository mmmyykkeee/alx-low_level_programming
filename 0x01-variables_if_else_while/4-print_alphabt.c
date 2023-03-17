#include <stdio.h>

/**
 * main - entry point 
 *
 * Return: always 0 (success)
 */
int main(void)
{
    char let;

    for (let = 'a'; let <= 'z'; let++)
    {
	    if (let != 'e' && let != 'q')
	    {
		    putchar(let);
	    }
    }

    putchar('\n');

    return (0);
}
