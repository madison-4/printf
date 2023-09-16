#include "main.h"
/**
 * _printf - clone printf in C
 * @format: character string to print
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0, i;

	for (i = 0; format[i]; i++)
	{
		while (format[i] != '%')
		{
			count += _putchar(format[i]);
			i++;
			continue;
		}
	}
	return (count);
}
