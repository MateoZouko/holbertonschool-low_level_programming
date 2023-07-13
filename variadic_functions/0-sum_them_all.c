#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of the parameters.
 * @n: number of parameters
 * @...: variable number of parameters to calculate.
 *
 * Return: If n == 0 - 0.
 * otherwise - the sum of parameters.
 */

int
sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
