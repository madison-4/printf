#include "main.h"
/**
 * _printf - clone printf in C
 * @format: character string to print
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0, ret;
	va_list args;

	va_start(args, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
			count += _putchar(format[i]);
		else
		{
			++i;
			if (!format[i])
				return (-1);
			ret = choice(args, format[i]);
			if (ret != (-7))
				count += ret;
			else
				if (format[i] == '%')
					count += _putchar(format[i]);
				else
				{
					count += _putchar('%');
					count += _putchar(format[i]);
				}
			i++;
			continue;
		}
		++i;
	}
	va_end(args);
	return (count);
}
