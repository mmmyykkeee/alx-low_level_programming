#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/* function prototypes */
char *_memset(char *s, char b, unsigned int n);
unsigned int _strlen(char *s);
void _puts(char *s);
int _putchar(char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);

/* macro definitions */
#define UNUSED(x) (void)(x)

#endif /* MAIN_H */
