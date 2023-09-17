#include "main.h"
#include <stdio.h>
/**
 * edge_cases - A fucntion that checks edge cases in a format string
 * chacks for %% and prints % and checks if the format string is
 * invalid and prints an error in standard error
 * prints the string as it is
 * @format: string to check
 * @args: a va_list of variable arguments
 *
 */
int edge_cases(const char *format, va_list args)
{
	int i;
	int count = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				putchar('%');
				i++;
				count++;
			}
			else
			{
				fprintf(stderr, "Error: Unexpexted '%%%c'\n", format[i +1]);
			}
		}else
		{
			putchar(format[i]);
			count++;
		}
	}
	return (count);
}
