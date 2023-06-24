#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_strings - prints strings, followed by a new line
 * @separator:String to be printed between strings
 * @n:The number of strings passed to the function
 * @...:the variable number of arguments
 * Description: If separator is NULL,do not print it
 *	 If one of the strings if NULL, print 'nil' instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
		unsigned int number;

	va_list manyStrings;

	va_start(manyStrings, n);

	for (number = 0; number < n; number++)
	{
		str = va_arg(manyStrings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (number != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(manyStrings);
}



