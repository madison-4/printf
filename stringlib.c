#include "main.h"
/**
 * _puts - a function that prints a string
 * @ar: va_list variable to be printed
 * Return: number of characters in the strings
 */
int _puts(va_list ar)
{
	int i, count = 0;
	char *str = va_arg(ar, char *);

	if (!(str))
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
/**
 * myputchar - a function to print chars
 * @arg: va_list variable argument
 * Return: number of chars(1)
 */
int myputchar(va_list arg)
{
	char c = (va_arg(arg, int));

	return (_putchar(c));
}
/**
 * perce - a function to print a percent
 * void arguments\
 * Return: 1 on success
 */
int perce(void)
{
	return (_putchar('%'));
}
