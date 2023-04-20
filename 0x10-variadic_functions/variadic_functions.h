#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
  char *op;
  void (*f)(va_list);
} op_t;

void print_char(va_list);
void print_integer(va_list);
void print_float(va_list);
void print_string(va_list);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
