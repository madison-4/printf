#include "main.h"
#include <stdio.h>
/**
 * _printf - a function that produces output according to a format
 * @format: character string to be printed
 * Return: number of character printed
 */
int _printf(const char *format, ...)
{

	int count = 0;

	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
				{
					char c = va_arg(args, int);
					putchar(c);
					count++;
					break;
				}
				case 's':
				{
					char *str = va_arg(args, char *);
					while (*str)
					{
						putchar(*str);
						str++;
						count++;
					}
					break;
				}
				case 'd':
				{
					int num = va_arg(args, int);
					printf("%d", num);
					count++;
					break;
				}
				case '%':
				{
					count += edge_cases(format, args);
					break;
				}
				default:
				{
					putchar('%');
					putchar(*format);
					count += 2;
					break;
				}
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
