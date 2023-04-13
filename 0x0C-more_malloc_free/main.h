#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/* Function prototypes */
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void *_memcpy(void *dest, const void *src, unsigned int n);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
int _putchar(char c);
#endif /* MAIN_H */
