#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - new struct type that define a printer
 * @symbol: symbol that represents a data type.
 * @print: a function pointer to a function that prints the data type that
 * corresponds to symbol.
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} print_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
